#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<ll> a(n);
  for(ll &i:a) cin >> i;
  sort(all(a));
  if(a[0]==0){
    cout << "0\n";
    return 0;
  }
  ll ch=1000000000000000000;
  for(ll i:a) ch/=i;
  if(ch==0) cout << "-1\n";
  else{
    ll ans=1;
    for(ll &i:a) ans*=i;
    cout << ans << "\n";
  }
  return 0;
}