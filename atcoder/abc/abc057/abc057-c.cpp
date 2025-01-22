#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,ans=10;
  cin >> n;
  for(ll i=1; i*i<=n; ++i){
    ll is=to_string(i).size(),nis=to_string(n/i).size();
    if(n%i==0) ans=min(max(is,nis),ans);
  }
  cout << ans << endl;
  return 0;
}