#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define rep(i,n) for(int i=0; i<(n); ++i)
const int INF = 1000000000;
int main(){
  int h,w;
  cin >> h >> w;
  
  if(h==1){
    vector<int> c(w);
    for(int i=0; i<w; ++i) cin >> c[i];
    vector<pair<int,int>> cr;
    cr.emplace_back(c[0],1);
    for(int i=1; i<w; ++i){
      if(c[i]==cr.back().fi) cr.back().se++;
      else cr.emplace_back(c[i],1);
    }
    int n=cr.size();
    int ans=0;
    for(int i=1; i<n; ++i) ans=max(cr[i-1].se+cr[i].se,ans);
    cout << ans << endl;
  }
  return 0;
}