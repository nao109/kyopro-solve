#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll k;
  cin >> k;
  ll ans=0;
  for(ll i=1; i<=k; ++i){
    for(ll j=1; j<=k; ++j){
      if(i*j>k) break;
      for(ll l=1; l<=k; ++l){
        if(i*j*l<=k) ++ans;
        else break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}