#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n;
  cin >> n;
  map<ll,ll> odd,even;
  for(int i=0; i<n; ++i){
    ll v;
    cin >> v;
    if(i%2==0){
      if(even.count(v)) ++even[v];
      else even[v]=1;
    }
    else{
      if(odd.count(v)) ++odd[v];
      else odd[v]=1;
    }
  }
  ll oma=0,ema=0,oid=0,eid=0;
  for(auto &i:odd){
    if(oma<i.se) oid=i.fi;
    oma=max(i.se,oma);
  }
  for(auto &i:even){
    if(ema<i.se) eid=i.fi;
    ema=max(i.se,ema);
  }
  if(oid==eid) cout << n-max(oma,ema) << endl;
  else cout << n-oma-ema << endl;
  return 0;
}