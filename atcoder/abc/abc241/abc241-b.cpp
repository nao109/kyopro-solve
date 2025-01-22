#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
const ll inf=10000000000;
int main(){
  cout << fixed << setprecision(7);
  ll n,m; cin >> n >> m;
  vector<ll> a(n); rep(i,n) cin >> a[i];
  vector<ll> b(m); rep(i,m) cin >> b[i];
  sort(a.begin(),a.end()); sort(b.begin(),b.end());
  for(ll i=0; i<m; ++i){
    for(ll j=0; j<n; ++j){
      if(a[j]==b[i]){
        a[j]=inf; b[i]=inf;
      }
      else continue;
    }
  }
  bool ans=true;
  rep(i,m){
    if(b[i]!=inf) ans=false;
    else continue;
  }
  if(ans) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}