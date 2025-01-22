#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<ll> a(n+1),b(n);
  for(ll &i:a) cin >> i;
  for(ll &i:b) cin >> i;
  ll ans=0;
  for(int i=0; i<n; ++i){
    ll ch=min(a[i],b[i]);
    a[i]-=ch;
    b[i]-=ch;
    if(b[i]>0) ch+=min(a[i+1],b[i]);
    a[i+1]-=min(a[i+1],b[i]);
    ans+=ch;
  }
  cout << ans << endl;
  return 0;
}