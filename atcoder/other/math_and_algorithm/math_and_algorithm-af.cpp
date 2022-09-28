#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<pair<int,int>> xy(n);
  for(int i=0; i<n; ++i) cin >> xy[i].fi >> xy[i].se;
  double mi=DBL_MAX;
  for(int i=0; i<n; ++i){
    for(int j=i+1; j<n; ++j){
      double dx=xy[i].fi-xy[j].fi, dy=xy[i].se-xy[j].se;
      double l=sqrt(dx*dx+dy*dy);
      mi=min(l,mi);
    }
  }
  cout << fixed << setprecision(12) << mi << endl;
  return 0;
}