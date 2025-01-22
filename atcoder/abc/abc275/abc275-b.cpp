#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const ll mod = 998244353;
int main(){
  ll a,b,c,d,e,f;
  cin >> a >> b >> c >> d >> e >> f;
  a%=mod,b%=mod,c%=mod,d%=mod,e%=mod,f%=mod;
  ll ans=(((a*b)%mod)*c%mod)%mod-(((d*e)%mod)*f%mod)%mod;
  if(ans<0) ans+=mod;
  cout << ans << endl;
  return 0;
}