#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  int h,w;
  cin >> h >> w;
  vector<vector<int>> c(h,vector<int>(w));
  rep(i,h)rep(j,w) cin >> c[i][j];
  
  if(h==1){
    vector<pair<int,int>> cr;
    cr.emplace_back(c[0][0],1);
    for(int i=1; i<w; ++i){
      if(c[0][i]==cr.back().fi) cr.back().se++;
      else cr.emplace_back(c[0][i],1);
    }
    int n=cr.size();
    int ans=cr[0].se;
    for(int i=1; i<n; ++i) ans=max(cr[i-1].se+cr[i].se,ans);
    cout << ans << endl;
  }
  return 0;
}