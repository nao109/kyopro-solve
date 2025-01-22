#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()

vector<bool> seen;
void dfs(map<int,vector<int>> &g,int v){
  seen[v]=true;
  for(int next_v:g[v]){
    if(!seen[next_v]) dfs(g,next_v);
  }
}

int main(){
  int n;
  cin >> n;
  map<int,vector<int>> g;
  for(int i=0; i<n; ++i){
    int a,b;
    cin >> a >> b;
    a--,b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  seen.assign(1000000000,false);
  dfs(g,0);
  
  int ans=0;
  for(int i=0; i<1000000000; ++i){
    if(seen[i]) ans=i+1;
  }
  cout << ans << endl;
  return 0;
}