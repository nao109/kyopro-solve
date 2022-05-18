#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
using P = pair<ll,ll>;
int main(){
  ll n,k;
  cin >> n >> k;
  vector<pair<P,ll>> a(n,{{0,0},k/n});
  k=k%n;
  for(ll i=0; i<n; ++i){
    cin >> a[i].fi.fi;
    a[i].fi.se=i;
  }
  sort(all(a));
  for(ll i=0; i<n; ++i){
    a[i].se+=max((ll)0,k);
    --k;
  }
  for(ll i=0; i<n; ++i){
    swap(a[i].fi.fi,a[i].fi.se);
  }
  sort(all(a));
  for(ll i=0; i<n; ++i){
    cout << a[i].se << endl;
  }
  return 0;
}