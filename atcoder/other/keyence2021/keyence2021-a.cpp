#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n;
  cin >> n;
  vector<ll> a(n),b(n),c(n);
  for(ll &i:a) cin >> i;
  for(ll &i:b) cin >> i;
  ll ma=a[0];
  c[0]=a[0]*b[0];
  for(int i=1; i<n; i++){
    ma=max(a[i],ma);
    c[i]=max(c[i-1],ma*b[i]);
  }
  for(ll &i:c) cout << i << endl;
  return 0;
}