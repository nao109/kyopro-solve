#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,m;
  cin >> n;
  vector<ll> x(n);
  for(ll &i:x) cin >> i;
  cin >> m;
  for(int i=0; i<m; ++i){
    ll a;
    cin >> a;
    --a;
    if(x[a]+1<x[a+1] || (a==n-1 && x[a]<2019)) ++x[a];
  }
  for(ll &i:x) cout << i << "\n";
  return 0;
}