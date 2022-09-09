#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const ll INF = (1LL<<62);
int main(){
  ll n;
  cin >> n;
  vector<ll> a(n),b(n);
  for(ll &i:a) cin >> i;
  for(ll &i:b) cin >> i;
  sort(all(a));
  sort(all(b));
  
  ll diff=0;
  for(ll i=0; i<n; ++i) diff+=abs(a[i]-b[i]);
  cout << diff << endl;
  return 0;
}