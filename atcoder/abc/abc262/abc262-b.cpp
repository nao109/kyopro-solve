#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,m;
  cin >> n >> m;
  set<pair<ll,ll>> g;
  for(int i=0; i<m; ++i){
    int u,v;
    cin >> u >> v;
    g.insert({u,v});
    g.insert({v,u});
  }
  ll ans=0;
  for(int i=1; i<=n; ++i){
    for(int j=i+1; j<=n; ++j){
      for(int k=j+1; k<=n; ++k){
        if(i<j && j<k){
          if(g.count({i,j}) && g.count({j,k}) && g.count({k,i})) ++ans;
        }
        else continue;
      }
    }
  }
  cout << ans << endl;
  return 0;
}