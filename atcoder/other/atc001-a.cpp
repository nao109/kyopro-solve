#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int h,w;
vector<string> f;
vector<vector<bool>> seen;

void dfs(int vh, int vw){
  seen[vh][vw]=true;
  for(int i=0; i<4; ++i){
    int nh=vh+dx[i],nw=vw+dy[i];
    if(nh<0 || h<=nh) continue;
    if(nw<0 || w<=nw) continue;
    if(f[nh][nw]=='#') continue;
    if(seen[nh][nw]) continue;
    dfs(nh,nw);
  }
}

int main(){
  cin >> h >> w;
  f.resize(h);
  pair<int,int> s,g;
  for(int i=0; i<h; ++i){
    cin >> f[i];
    for(int j=0; j<w; ++j){
      if(f[i][j]=='s') s={i,j};
      if(f[i][j]=='g') g={i,j};
    }
  }

  seen.assign(h,vector<bool>(w,false));
  dfs(s.fi,s.se);
  cout << (seen[g.fi][g.se] ? "Yes\n" : "No\n");
  return 0;
}