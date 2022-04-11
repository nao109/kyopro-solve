#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int q; cin >> q;
  vector<pair<ll,ll>> tube;
  rep(i,q){
    int a; cin >> a;
    if(a==1){
      int x,c; cin >> x >> c;
      tube.pb({x,c});
    }
    else{
      ll c; cin >> c;
      ll ans=0,cnt=0;
      while(cnt<c){
        if(tube[0].se<=c-cnt){
          ans+=tube[0].fi*tube[0].se;
          cnt+=tube[0].se;
          tube.erase(tube.begin());
        }
        else{
          ans+=tube[0].fi*(c-cnt);
          tube[0].se-=c-cnt; cnt+=c-cnt;
        }
      }
      cout << ans << endl;
    }
  }
  return 0;
}