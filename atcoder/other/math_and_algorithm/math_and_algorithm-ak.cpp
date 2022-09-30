#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,m;
  cin >> n;
  vector<ll> a(n);
  for(int i=1; i<n; ++i){
    cin >> a[i];
    a[i]+=a[i-1];
  }
  cin >> m;
  vector<ll> b(m);
  for(int i=0; i<m; ++i) cin >> b[i];

  ll ans=0;
  for(int i=1; i<m; ++i) ans+=abs(a[b[i]-1]-a[b[i-1]-1]);
  cout << ans << endl;
  return 0;
}