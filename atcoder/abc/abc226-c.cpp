#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
vector<bool> seen;
vector<ll> t;
ll ans=0;
void dfs(vector<vector<int>> &a, int v){
  if(!seen[v]) ans+=t[v];
  seen[v]=true;
  for(int next_v:a[v]){
    if(!seen[next_v]) dfs(a,next_v);
  }
}

int main(){
  int n;
  cin >> n;
  t.assign(n,0);
  vector<vector<int>> a(n);
  for(int i=0; i<n; ++i){
    int k;
    cin >> t[i] >> k;
    for(int j=0; j<k; ++j){
      int x;
      cin >> x;
      x--;
      a[i].push_back(x);
    }
  }

  seen.assign(n,false);
  dfs(a,n-1);
  
  cout << ans << endl;
  return 0;
}