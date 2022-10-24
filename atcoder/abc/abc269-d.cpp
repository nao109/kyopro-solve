#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#include<atcoder/all>
using namespace atcoder;

bool connect(int x1,int y1,int x2,int y2){
  int dx=x2-x1,dy=y2-y1;
  if(dx==-1 && dy==-1) return true;
  if(dx==-1 && dy==0) return true;
  if(dx==0 && dy==-1) return true;
  return false;
}

int main(){
  int n;
  cin >> n;
  vector<pair<int,int>> xy(n);
  for(int i=0; i<n; ++i) cin >> xy[i].fi >> xy[i].se;

  dsu uf(n);
  for(int i=0; i<n; ++i){
    for(int j=0; j<n; ++j){
      if(connect(xy[i].fi,xy[i].se,xy[j].fi,xy[j].se)){
        uf.merge(i,j);
      }
    }
  }

  int ans=0;
  for(int i=0; i<n; ++i){
    if(uf.leader(i)==i) ans++;
  }
  cout << ans << endl;
  return 0;
}