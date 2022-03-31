#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int h,w; cin >> h >> w;
  vector<pair<string,bool>> a(h); rep(i,h) cin >> a[i].fi;
  
  int cnth=0;
  rep(i,h){
    rep(j,w){
      if(a[i].fi[j]=='#'){a[i].se=true; break;}
    }
    if(a[i].se) ++cnth;
  }
  
  int cntw=0;
  vector<pair<string,bool>> b(w);
  rep(i,w){
    rep(j,h){
      if(a[j].se) b[i].fi.pb(a[j].fi[i]);
    }
  }
  
  rep(i,w){
    rep(j,h){
      if(b[i].fi[j]=='#'){b[i].se=true; break;}
    }
    if(b[i].se) ++cntw;
  }
  
  vector<string> c(cnth);
  rep(i,cnth){
    rep(j,w){
      if(b[j].se) c[i].pb(b[j].fi[i]);
    }
  }
  
  rep(i,h){
    if(a[i].se) cerr << a[i].fi << endl;
  }
  cerr << "\n";
  rep(i,w){
    if(b[i].se) cerr << b[i].fi << endl;
  }
  
  rep(i,cnth) cout << c[i] << endl;
  return 0;
}