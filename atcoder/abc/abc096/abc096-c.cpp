#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int dx[8]={-1,0,1,0},dy[8]={0,-1,0,1};
  int h,w;
  cin >> h >> w;
  vector<string> s(h);
  for(int i=0; i<h; ++i) cin >> s[i];
  vector<vector<bool>> flag(h,vector<bool>(w,false));
  for(int i=0; i<h; ++i){
    for(int j=0; j<w; ++j){
      for(int k=0; k<4; ++k){
        if(s[i][j]=='.'){
          flag[i][j]=true;
        }
        if(s[i][j]=='#'){
          int x=i+dx[k],y=j+dy[k];
          if(0<=x && x<h && 0<=y && y<w && s[x][y]=='#'){
            flag[i][j]=true;
          }
        }
      }
    }
  }
  bool ans=true;
  for(int i=0; i<h; ++i){
    for(int j=0; j<w; ++j){
      if(!flag[i][j]){
        ans=false;
        break;
      }
    }
  }
  
  cout << (ans ? "Yes\n" : "No\n");
  return 0;
}