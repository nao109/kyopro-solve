#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const int mod = 998244353;
int main(){
  int n;
  cin >> n;
  vector<vector<ll>> dp(n,vector<ll>(9));
  for(int i=0; i<9; ++i) dp[0][i]=1;
  for(int i=1; i<n; ++i){
    for(int j=0; j<9; ++j){
      if(j==0) dp[i][j]=(dp[i-1][j]+dp[i-1][j+1]) % mod;
      else if(j==8) dp[i][j]=(dp[i-1][j-1]+dp[i-1][j]) % mod;
      else dp[i][j]=(dp[i-1][j-1]+dp[i-1][j]+dp[i-1][j+1]) % mod;
    }
  }
  ll ans=0;
  for(int i=0; i<9; ++i) ans=(ans+dp[n-1][i] % mod) % mod;
  cout << ans << endl;
  return 0;
}