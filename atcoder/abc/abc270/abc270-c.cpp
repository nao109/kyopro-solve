#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
void dfs(int v,vector<vector<int>> &g,vector<bool> &seen,vector<int> &prev){
  seen[v]=true;
  for(auto v2:g[v]){
    if(seen[v2]) continue;
    prev[v2]=v;
    dfs(v2,g,seen,prev);
  }
  return;
}

int main(){
  int n,x,y;
  cin >> n >> x >> y;
  x--,y--;
  vector<vector<int>> g(n);
  for(int i=0; i<n-1; ++i){
    int u,v;
    cin >> u >> v;
    u--,v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  vector<bool> seen(n,false);
  vector<int> prev(n,-1);
  dfs(x,g,seen,prev);

  vector<int> order;
  int now=y;
  while(now!=-1) {
    order.push_back(now+1);
    now=prev[now];
  }
  reverse(all(order));
  
  for(int i=0; i<order.size(); ++i) {
    cout << order[i];
    if(i!=order.size()-1) cout << " ";
  }
  cout << endl;
	return 0;
}