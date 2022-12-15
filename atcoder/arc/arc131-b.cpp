#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const int dx[4]={0,-1,0,1},dy[4]={1,0,-1,0};
int main(){
  int h,w;
  cin >> h >> w;
  vector<string> c(h);
  for(string &i:c) cin >> i;

  for(int i=0; i<h; ++i)for(int j=0; j<w; ++j){
    if(c[i][j]=='.'){
      char now='1';
      for(int k=0; k<4; ++k){
        bool flag=false;
        for(int l=0; l<4; ++l){
          int x=i+dx[l],y=j+dy[l];
          if(0<=x && x<h && 0<=y && y<w){
            if(c[x][y]=='1'+k) flag=true;
          }
        }
        if(flag) now++;
        else break;
      }
      c[i][j]=now;
    }
  }

  for(string &i:c) cout << i << endl;
  return 0;
}