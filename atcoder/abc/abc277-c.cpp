#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()

vector<int> cc;
void dfs(vector<vector<int>> &g,int v,int id){
  cc[v]=id;
  for(auto e:g[v]){
    if(cc[e]==-1){
      dfs(g,e,id);
    }
  }
}

int main() {
  int n;
  cin >> n;
  set<int> fl;
  vector<pair<int,int>> r;
  for(int i=0; i<n; ++i){
    int a,b;
    cin >> a >> b;
    --a,--b;
    fl.insert(a),fl.insert(b);
    r.emplace_back(a,b);
    r.emplace_back(b,a);
  }

  if(!fl.count(0)){
    cout << 1 << endl;
    return 0;
  }

  int s=fl.size();
  int cnt=0;
  map<int,int> num,rev;
  for(int i:fl) num[i]=cnt,rev[cnt]=i,++i;
  
  vector<vector<int>> g(s);
  for(auto i:num) g[r[i.se].fi].push_back(r[i.se].se);
  
  cc.assign(s,-1);
  int id=0;
  for(int i=0; i<n; ++i){
    if(cc[i]==-1){
      dfs(g,i,id);
      id++;
    }
  }
  
  int ma=0;
  for(auto i:rev){
    if(cc[0]==cc[i.fi]){
      ma=i.se;
    }
  }
  
  cout << ma+1 << endl;
  return 0;
}