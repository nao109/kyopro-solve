#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n;
  cin >> n;
  vector<ll> a(n),b(n),c(n);
  for(ll i=0; i<n; ++i) cin >> a[i] >> b[i] >> c[i];
  vector<vector<ll>> dp(n,vector<ll>(3,0));
  dp[0][0]=a[0], dp[0][1]=b[0], dp[0][2]=c[0];
  for(ll i=1; i<n; ++i){
    dp[i][0]=max(dp[i-1][1],dp[i-1][2])+a[i];
    dp[i][1]=max(dp[i-1][0],dp[i-1][2])+b[i];
    dp[i][2]=max(dp[i-1][0],dp[i-1][1])+c[i];
  }
  cout << max({dp[n-1][0],dp[n-1][1],dp[n-1][2]}) << "\n";
  return 0;
}