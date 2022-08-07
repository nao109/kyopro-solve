#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m,q;
  cin >> n >> m >> q;
  vector<vector<int>> g(n);
  vector<int> c(n);
  for(int i=0; i<m; ++i){
    int u,v;
    cin >> u >> v;
    g[u-1].push_back(v);
    g[v-1].push_back(u);
  }
  for(int i=0; i<n; ++i) cin >> c[i];
  for(int i=0; i<q; ++i){
    int p,x;
    cin >> p >> x;
    cout << c[x-1] << endl;
    if(p==1){
      for(int &j:g[x-1]) c[j-1]=c[x-1];
    }
    else cin >> c[x-1];
  }
  return 0;
}