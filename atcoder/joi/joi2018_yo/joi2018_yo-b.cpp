#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n;
  cin >> n;
  vector<ll> a(n+2,0);
  for(ll i=1; i<=n; ++i) cin >> a[i];

  ll ma=0,cnt=1;
  for(ll i=0; i<n+2; ++i){
    if(a[i]==1) ++cnt;
    else if(cnt>0) ma=max(cnt,ma),cnt=1;
  }
  cout << ma << endl;
  return 0;
}