#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const ll mod = 1000000007;
int main(){
  ll n,l;
  cin >> n >> l;
  vector<ll> dp(n+1,1);
  dp[0]=1;
  for(ll i=1; i<=n; ++i){
    dp[i]=dp[i-1];
    if(i-l>=0) dp[i]=(dp[i]+dp[i-l])%mod;
  }
  cout << dp[n] << endl;
  return 0;
}