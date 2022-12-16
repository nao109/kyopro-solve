#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define rep(i,n,m) for(int i=(n); i<(m); ++i)
const int INF = 1000000000;
int main(){
  int n;
  cin >> n;
  vector<pair<int,int>> h(n*4);
  for(int i=0; i<n*4; ++i){
    cin >> h[i].fi;
    h[i].se=i/n;
    cerr << h[i].se << " ";
  }
  sort(all(h));
  
  int mi=INF,ma=0,ans=INF;
  rep(i,0,n*4)rep(j,i+1,n*4)rep(k,j+1,n*4)rep(l,k+1,n*4){
    if(h[i].se!=h[j].se && h[j].se!=h[k].se && h[k].se!=h[l].se && h[l].se!=h[i].se){
      ma=max(max(h[i].fi,h[j].fi),max(h[k].fi,h[l].fi));
      mi=min(min(h[i].fi,h[j].fi),min(h[k].fi,h[l].fi));
      ans=min(ma-mi,ans);
    }
  }
  cout << ans << endl;
  return 0;
}