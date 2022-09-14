#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,s;
  cin >> n >> s;
  vector<ll> a(n+1);
  for(ll i=1; i<=n; ++i) cin >> a[i];
  
  vector<vector<bool>> dp(n+1,vector<bool>(10001));
  dp[0][0]=true;
  for(ll i=1; i<=n; ++i){
    for(ll j=1; j<=10000; ++j){
      dp[i][j]=dp[i-1][j];
      if(j>=a[i]) dp[i][j]=(dp[i-1][j] || dp[i-1][j-a[i]]);
    }
  }

  cout << (dp[n][s] ? "Yes\n" : "No\n");
  return 0;
}