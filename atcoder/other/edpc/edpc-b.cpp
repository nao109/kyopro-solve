#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,k;
  cin >> n >> k;
  vector<ll> h(n);
  for(ll &i:h) cin >> i;
  vector<ll> dp(n,1<<30);
  dp[0]=0;
  dp[1]=abs(h[1]-h[0]);
  for(ll i=2; i<n; ++i){
    for(ll j=1; j<=k; ++j){
      if(i-j<0) continue;
      dp[i]=min(dp[i],dp[i-j]+abs(h[i]-h[i-j]));
    }
  }
  cout << dp[n-1] << endl;
  return 0;
}