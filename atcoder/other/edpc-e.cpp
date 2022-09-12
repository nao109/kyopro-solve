#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const ll INF = (1ll<<62);
int main(){
  ll n,W;
  cin >> n >> W;
  vector<ll> w(n+1),v(n+1);
  for(ll i=1; i<=n; ++i) cin >> w[i] >> v[i];
  vector<vector<ll>> dp(n+1,vector<ll>(100001,INF));
  dp[0][0]=0;
  for(ll i=1; i<=n; ++i){
    for(ll j=0; j<100001; ++j){
      dp[i][j]=dp[i-1][j];
      if(j>=v[i]) dp[i][j]=min(dp[i-1][j],dp[i-1][j-v[i]]+w[i]);
    }
  }
  
  ll ma=100000;
  for(ll j=0; j<100001; ++j){
    if(dp[n][j]<=W) ma=j;
  }
  cout << ma << "\n";
  return 0;
}