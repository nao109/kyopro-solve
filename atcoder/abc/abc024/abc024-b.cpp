#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  ll n,t; cin >> n >> t;
  vector<ll> a(n,0);
  rep(i,n) cin >> a[i];
  ll ans=0;
  rep(i,n){
    if(i<n-1){
      if(a[i]+t<a[i+1]) ans+=t;
      else ans+=a[i+1]-a[i];
    }
    else ans+=t;
  }
  cout << ans << endl;
  return 0;
}