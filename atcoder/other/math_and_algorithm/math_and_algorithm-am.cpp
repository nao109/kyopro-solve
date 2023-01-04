#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()

vector<int> seen;
void dfs(vector<vector<int>> &g,int v){
  seen[v]=true;
  for(int next_v:g[v]){
    if(!seen[next_v]) dfs(g,next_v);
  }
}

int main(){
  int n,m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  for(int i=0; i<m; ++i){
    int a,b;
    cin >> a >> b;
    a--,b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  seen.assign(n,false);
  dfs(g,0);
  
  bool flag=true;
  for(int i=0; i<n; ++i){
    if(!seen[i]) flag=false;
  }
  if(flag) cout << "The graph is connected.\n";
  else cout << "The graph is not connected.\n";
  return 0;
}