#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()

bool dfs(string v, map<string,vector<string>> &g, map<string,bool> &seen, map<string,bool> &finished){
  bool ret=true;
  seen[v]=true;
  for(auto v2: g[v]){
    if(seen[v2]){
      if(!finished[v2]){
        return false;
      }
      continue;
    }
    ret &= dfs(v2,g,seen,finished);
  }
  finished[v]=true;
  return ret;
}

int main(){
  int n;
  cin >> n;
  vector<string> v;
  map<string,vector<string>> g;
  for(int i=0; i<n; ++i){
    string s,t;
    cin >> s >> t;
    v.push_back(s);
    v.push_back(t);
    g[s].push_back(t);
  }
  
  map<string,bool> seen, finished;
  for(auto i:v){
    if(!dfs(i,g,seen,finished)){
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}