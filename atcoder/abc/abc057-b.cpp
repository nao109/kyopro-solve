#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  ll n,m; cin >> n >> m;
  vector<pair<ll,ll>> a(n); rep(i,n) cin >> a[i].fi >> a[i].se;
  vector<pair<ll,ll>> c(m); rep(i,m) cin >> c[i].fi >> c[i].se;
  rep(i,n){
    ll ans=200000000,num=1;
    rep(j,m){
      int dist=abs(a[i].fi-c[j].fi)+abs(a[i].se-c[j].se);
      if(dist<ans){
        ans=dist; num=j+1;
        //cerr << num << " " << ans << endl;
      }
    }
    cout << num << endl;
  }
  return 0;
}