#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
ll lcm(ll a,ll b){
  return a/gcd(a,b)*b;
}
int main(){
  cout << fixed << setprecision(15);
  ll n; cin >> n;
  ll ans=1;
  for(ll i=2; i<=n; ++i) ans=lcm(ans,i);
  cout << ans+1 << endl;
  return 0;
}