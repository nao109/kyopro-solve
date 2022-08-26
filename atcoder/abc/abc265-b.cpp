#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,m,t;
  cin >> n >> m >> t;
  vector<ll> a(n-1);
  for(ll &i:a) cin >> i;
  map<ll,ll> xy;
  for(ll i=0; i<m; ++i){
    ll x,y;
    cin >> x >> y;
    xy[x-1]=y;
  }
  bool ans=true;
  for(ll i=0; i<n-1; ++i){
    if(ans){
      t-=a[i];
      if(xy.count(i)) t+=xy[i];
    }
    if(t<=0) ans=false;
  }
  cout << (ans ? "Yes\n" : "No\n");
  return 0;
}