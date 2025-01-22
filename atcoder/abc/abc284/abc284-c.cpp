#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m;
  cin >> n >> m;
  dsu d(n);
  for(int i=0; i<m; ++i){
    int a,b;
    cin >> a >> b;
    d.merge(a-1,b-1);
  }
  
  set<int> l;
  for(int i=0; i<n; ++i) l.insert(d.leader(i));
  cout << l.size() << endl;
  return 0;
}