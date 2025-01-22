#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<pair<int,int>> xy(n);
  rep(i,n) cin >> xy.at(i).first >> xy.at(i).second;
  int ans=0;
  rep(i,n)rep(j,i){
    int xdiff=abs(xy.at(i).first-xy.at(j).first);
    int ydiff=abs(xy.at(i).second-xy.at(j).second);
    if(ydiff<=xdiff) ++ans;
  }
  cout << ans << endl;
  return 0;
}