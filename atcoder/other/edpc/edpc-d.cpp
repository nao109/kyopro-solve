#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,W;
  cin >> n >> W;
  vector<ll> w(n+1),v(n+1);
  for(ll i=1; i<=n; ++i) cin >> w[i] >> v[i];
  vector<vector<ll>> dp(n+1,vector<ll>(W+1));
  
  for(ll i=1; i<=n; ++i){
    for(int j=0; j<=W; ++j){
      dp[i][j]=dp[i-1][j];
      if(j>=w[i]) dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
    }
  }
  cout << dp[n][W] << "\n";
  return 0;
}