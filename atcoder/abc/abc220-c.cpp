#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  ll n; cin >> n;
  vector<ll> a(n); ll suma=0;
  for(ll i=0; i<n; ++i){
    cin >> a[i];
    suma+=a[i];
  }
  ll x; cin >> x;
  ll cnt=(x/suma)*n,i=0;
  x-=(x/suma)*suma;
  while(x>=0){
    x-=a[i]; ++cnt; ++i;
  }
  cout << cnt << endl;
  return 0;
}