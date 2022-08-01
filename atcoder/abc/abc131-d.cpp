#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n;
  cin >> n;
  map<ll,ll> dt;
  for(int i=0; i<n; ++i){
    ll t,d;
    cin >> t >> d;
    if(dt.count(d)) dt[d]+=t;
    else dt[d]=t;
  }
  ll time=0;
  for(auto &i:dt){
    i.se-=time;
    if(i.fi<i.se){
      cout << "No\n";
      return 0;
    }
    else time+=i.fi-i.se;
  }
  cout << "Yes\n";
  return 0;
}