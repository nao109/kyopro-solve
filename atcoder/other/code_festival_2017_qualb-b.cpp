#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m;
  map<int,int> d,t;
  cin >> n;
  for(int i=0; i<n; ++i){
    int di;
    cin >> di;
    if(d.count(di)) d[di]++;
    else d[di]=1;
  }
  cin >> m;
  for(int i=0; i<m; ++i){
    int g;
    cin >> g;
    if(t.count(g)) t[g]++;
    else t[g]=1;
  }
  bool flag=true;
  for(auto &i:t){
    if(!d.count(i.fi) || d[i.fi]<i.se) flag=false;
  }
  cout << (flag ? "YES\n" : "NO\n");
  return 0;
}