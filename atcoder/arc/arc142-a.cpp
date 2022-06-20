#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,k;
  cin >> n >> k;
  ll ans=0;
  if(n<k) ans=0;
  else{
    ll k1=k;
    while(k1<=n){
      ++ans;
      k1*=10;
    }
    string sk=to_string(k);
    reverse(all(sk));
    k1=stoll(sk);
    if(k1>=k){
      while(k1<=n){
        ++ans;
        k1*=10;
      }
    }
  }
  cout << ans << endl;
  return 0;
}