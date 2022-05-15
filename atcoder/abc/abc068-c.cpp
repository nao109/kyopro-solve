#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n,m;
  cin >> n >> m;
  set<int> s,g;
  for(int i=0; i<m; ++i){
    int a,b;
    cin >> a >> b;
    if(a==1){
      s.insert(b);
    }
    if(b==n){
      g.insert(a);
    }
  }
  bool ans=false;
  for(int i:s){
    if(g.count(i)){
      cout << "POSSIBLE\n"; return 0;
    }
  }
  cout << "IMPOSSIBLE\n";  
  return 0;
}