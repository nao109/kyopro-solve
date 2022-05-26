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
  vector<pair<string,int>> p(m);
  for(int i=0; i<m; ++i){
    cin >> p[i].se >> p[i].fi;
  }
  set<int> ac;
  map<int,int> wa;
  for(int i=0; i<m; ++i){
    if(p[i].fi=="WA" && !ac.count(p[i].se)){
      if(wa.count(p[i].se)) ++wa[p[i].se];
      else wa[p[i].se]=1;
    }
    if(p[i].fi=="AC") ac.insert(p[i].se);
  }
  int wasum=0;
  for(auto i:wa) wasum+=i.se;
  cout << ac.size() << " " << wasum << endl;
  return 0;
}