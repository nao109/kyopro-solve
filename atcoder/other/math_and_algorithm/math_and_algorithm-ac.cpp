#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n;
  cin >> n;
  vector<ll> a(n+1,0),dp(n+1,0);
  for(ll i=1; i<=n; ++i) cin >> a[i];

  dp[1]=a[1];
  for(ll i=2; i<=n; ++i){
    dp[i]=max(dp[i-1],dp[i-2]+a[i]);
  }
  cout << dp[n] << endl;
  return 0;
}