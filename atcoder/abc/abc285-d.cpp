#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  
  map<string,set<string>> st;
  for(int i=0; i<n; ++i){
    string s,t;
    cin >> s >> t;
    st[s].insert(t);
  }
  
  map<string,pair<int,int>> dev;
  for(auto [s,p]:st){
    dev[s].se++;
    for(auto j:p) dev[j].fi++;
  }
  
  bool flag=false;
  for(auto [s,p]:dev){
    if(p.fi==0 || p.se==0) flag=true;
  }
  cout << (flag ? "Yes\n" : "No\n");
  return 0;
}