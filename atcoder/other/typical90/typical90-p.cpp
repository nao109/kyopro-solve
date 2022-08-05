#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,a,b,c;
  cin >> n >> a >> b >> c;
  ll ans=10000;
  for(ll i=0; i<10000; ++i){
    for(ll j=0; j<10000; ++j){
      ll bar=n-a*i-b*j;
      if(bar>=0 && bar%c==0) ans=min(i+j+bar/c,ans);
    }
  }
  cout << ans << endl;
  return 0;
}