#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  ll n,m;
  cin >> n >> m;
  vector<pair<ll,ll>> a(n);
  for(ll i=0; i<n; ++i){
    cin >> a[i].fi >> a[i].se;
  }
  sort(all(a));
  ll ans=0,cnt=0,num=0;
  while(cnt<m){
    ans+=a[num].fi*min(m-cnt,a[num].se);
    cnt+=min(m-cnt,a[num].se);
    ++num;
  }
  cout << ans << endl;
  return 0;
}