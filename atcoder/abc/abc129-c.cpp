#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const int mod = 1000000007;
int main(){
  int n,m;
  cin >> n >> m;
  vector<bool> step(n+1,true);
  for(int i=0; i<n; ++i){
    int a;
    cin >> a;
    step[a]=false;
  }
  vector<int> dp(n+1,0);
  dp[0]=1,dp[1]=(step[1] ? 1 : 0);
  for(int i=2; i<n+1; ++i){
    if(step[i]) dp[i]=(dp[i-1]+dp[i-2])%mod;
    else dp[i]=0;
  }
  cout << dp[n]%mod << endl;
  return 0;
}