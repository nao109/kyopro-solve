#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n;
  cin >> n;
  ll sum=0;
  vector<ll> a(n+2,0);
  for(ll i=0; i<n+2; ++i){
    if(1<=i && i<=n) cin >> a[i];
    if(i>0) sum+=abs(a[i]-a[i-1]);
  }
  for(ll i=1; i<=n; ++i){
    ll ans=sum;
    ans = ans + abs(a[i+1]-a[i-1]) - abs(a[i+1]-a[i]) - abs(a[i]-a[i-1]);
    cout << ans << endl;
  }
  return 0;
}