#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()

vector<bool> seen;
void dfs(vector<set<int>> &g,int v,vector<int> &r){
  seen[v]=true;
  r.push_back(v);
  for(int next_v:g[v]){
    if(!seen[next_v]){
      dfs(g,next_v,r);
      r.push_back(v);
    }
  }
}

int main(){
  int n;
  cin >> n;
  vector<set<int>> g(n);
  for(int i=0; i<n-1; ++i){
    int a,b;
    cin >> a >> b;
    a--,b--;
    g[a].insert(b);
    g[b].insert(a);
  }
  
  seen.assign(n,false);
  vector<int> r;
  dfs(g,0,r);
  for(int i:r) cout << i+1 << endl;
  return 0;
}