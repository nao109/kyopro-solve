#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m;
  cin >> n >> m;
  vector<pair<int,string>> p(m);
  for(int i=0; i<m; ++i){
    cin >> p[i].fi >> p[i].se;
  }
  set<int> ac;
  map<int,int> wa;
  for(int i=0; i<m; ++i){
    if(p[i].se=="WA" && !ac.count(p[i].fi)){
      if(wa.count(p[i].fi)) ++wa[p[i].fi];
      else wa[p[i].fi]=1;
    }
    else if(p[i].se=="AC") ac.insert(p[i].fi);
  }
  int wasum=0;
  for(auto i:wa){
    if(ac.count(i.fi)) wasum+=i.se;
  }
  cout << ac.size() << " " << wasum << endl;
  return 0;
}