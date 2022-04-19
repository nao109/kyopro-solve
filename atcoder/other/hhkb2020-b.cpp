#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int h,w; cin >> h >> w;
  vector<string> s(h); rep(i,h) cin >> s[i];
  int dx[2]={1,0}; int dy[2]={0,1};
  int ans=0;
  rep(i,h)rep(j,w){
    if(s[i][j]=='#') continue;
    rep(k,2){
      int tx=i+dx[k],ty=j+dy[k];
      if(tx>=h||ty>=w) continue;
      if(s[tx][ty]=='.') ++ans;
    }
  }
  cout << ans << endl;
  return 0;
}