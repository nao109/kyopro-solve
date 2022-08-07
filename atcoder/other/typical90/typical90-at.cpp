#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,k;
  cin >> n;
  vector<ll> a(46),b(46),c(46);
  for(ll i=0; i<n; ++i){
    cin >> k;
    ++a[k%46];
  }
  for(ll i=0; i<n; ++i){
    cin >> k;
    ++b[k%46];
  }
  for(ll i=0; i<n; ++i){
    cin >> k;
    ++c[k%46];
  }
  ll ans=0;
  for(ll i=0; i<46; ++i){
    for(ll j=0; j<46; ++j){
      for(ll k=0; k<46; ++k){
        if((i+j+k)%46==0) ans+=a[i]*b[j]*c[k];
      }
    }
  }
  cout << ans << endl;
  return 0;
}