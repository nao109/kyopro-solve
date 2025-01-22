#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  ll n,m,t; cin >> n >> m >> t;
  vector<pair<ll,ll>> a(m);
  rep(i,m) cin >> a[i].fi >> a[i].se;
  ll ch=n;
  rep(i,m){
    if(i==0) ch-=a[i].fi;
    else ch-=a[i].fi-a[i-1].se;
    if(ch<=0){cout << "No\n"; return 0;}
    ch=min(n,ch+a[i].se-a[i].fi);
    if(i==m-1) ch-=t-a[i].se;
    if(ch<=0){cout << "No\n"; return 0;}
  }
  cout << "Yes\n";
  return 0;
}