#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m;
  cin >> n >> m;
  vector<set<int>> g(n);
  for(int i=0; i<n; ++i){
    int a,b;
    cin >> a >> b;
    a--,b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  int ans=0;
  for(int i=0; i<n; ++i){
    int cnt=0;
    for(int j:g[i]){
      if(j<i) cnt++;
    }
    if(cnt==1) ans++;
  }
  cout << ans << endl;
  return 0;
}