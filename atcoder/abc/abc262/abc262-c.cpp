#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n;
  cin >> n;
  vector<pair<ll,ll>> a(n);
  for(int i=0; i<n; ++i){
    a[i].fi=i+1;
    cin >> a[i].se;
  }
  ll ans=0,sum=0;
  for(int i=0; i<n; ++i){
    if(a[i].fi!=a[i].se){
      if(a[i].fi==a[a[i].se-1].se) ++ans;
    }
    else ++sum;
  }
  if(sum%2==0) ans=ans/2+sum/2*(sum-1);
  else ans=ans/2+(sum-1)/2*sum;
  cout << ans << endl;
  return 0;
}