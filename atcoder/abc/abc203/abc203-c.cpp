#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  ll n,k;
  cin >> n >> k;
  map<ll,ll> f;
  for(ll i=0; i<n; ++i){
    ll a,b;
    cin >> a >> b;
    if(f.count(a)) f[a]+=b;
    else f[a]=b;
  }
  ll pos=0;
  for(auto i:f){
    if(k>0){
      if(i.fi-pos <= k){
        k += i.se - (i.fi-pos);
        pos = i.fi;
      }
      else{
        pos += k;
        k=0;
      }
    }
    else break;
  }
  cerr << pos << " " << k << endl;
  pos += k;
  cout << pos << endl;
  return 0;
}