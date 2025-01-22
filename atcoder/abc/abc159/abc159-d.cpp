#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n;
  cin >> n;
  vector<ll> a(n);
  map<ll,ll> cnt;
  for(ll &i:a){
    cin >> i;
    if(cnt.count(i)) ++cnt[i];
    else cnt[i]=1;
  }
  ll ans=0;
  for(auto &i:cnt) ans+=i.se*(i.se-1);
  for(int i=0; i<n; ++i){
    ans-=cnt[a[i]]*(cnt[a[i]]-1)-(cnt[a[i]]-1)*(cnt[a[i]]-2);
    cout << ans/2 << endl;
    ans+=cnt[a[i]]*(cnt[a[i]]-1)-(cnt[a[i]]-1)*(cnt[a[i]]-2);
  }
  return 0;
}