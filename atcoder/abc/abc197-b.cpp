#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int h,w,x,y; cin >> h >> w >> x >> y;
  string s[h]; rep(i,h) cin >> s[i];
  --x; --y;
  int ans=0,ch=0;
  for(int i=x; i>=0; --i){
    if(s[i][y]=='.') ++ch;
    else break;
  }
  //cout << ch << " ";
  ans+=ch; ch=0;
  for(int i=x; i<h; ++i){
    if(s[i][y]=='.') ++ch;
    else break;
  }
  //cout << ch << " ";
  ans+=ch; ch=0;
  for(int i=y; i>=0; --i){
    if(s[x][i]=='.') ++ch;
    else break;
  }
  //cout << ch << " ";
  ans+=ch; ch=0;
  for(int i=y; i<w; ++i){
    if(s[x][i]=='.') ++ch;
    else break;
  }
  //cout << ch << endl;
  ans+=ch; ch=0;
  ans-=3;
  cout << ans << endl;
  return 0;
}