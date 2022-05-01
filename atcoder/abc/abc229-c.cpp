#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  ll n,w; cin >> n >> w;
  vector<pair<ll,ll>> a(n); rep(i,n) cin >> a[i].fi >> a[i].se;
  sort(all(a)); reverse(all(a));
  ll ans=0,ch=0;
  rep(i,n){
    ans+=a[i].fi*min(w-ch,a[i].se);
    ch+=a[i].se;
    if(ch>=w) break;
  }
  cout << ans << endl;
  return 0;
}