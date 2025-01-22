#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  ll s,p;
  cin >> s >> p;
  set<ll> div;
  for(ll i=1; i*i<=p; ++i){
    if(p%i==0) div.insert(i);
  }
  bool ans=false;
  for(ll i:div){
    if(i+p/i==s){
      ans=true; break;
    }
  }
  cout << (ans?"Yes\n":"No\n");
  return 0;
}