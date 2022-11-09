#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m;
  cin >> n >> m;
  vector<int> cnt(n+1);
  vector<set<int>> g(n+1);
  for(int i=0; i<m; ++i){
    int a,b;
    cin >> a >> b;
    cnt[a]++,cnt[b]++;
    g[a].insert(b);
    g[b].insert(a);
  }
  for(int i=0; i<n; ++i){
    cout << cnt[i+1];
    if(cnt[i+1]==0) cout << "\n";
    else cout << " ";
    int k=0;
    for(int j:g[i+1]){
      cout << j;
      if(k<cnt[i+1]-1) cout << " ";
      else cout << "\n";
      k++;
    }
  }
  return 0;
}