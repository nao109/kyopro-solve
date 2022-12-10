#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int h,w,r,c;
  cin >> h >> w >> r >> c;
  int ans;
  if(h==1 && w==1) ans=0;
  else if(h==1){
    if(c==1 || c==w) ans=1;
    else ans=2;
  }
  else if(w==1){
    if(r==1 || r==h) ans=1;
    else ans=2;
  }
  else{
    if(r==1 || r==h){
      if(c==1 || c==w) ans=2;
      else ans=3;
    }
    else{
      if(c==1 || c==w) ans=3;
      else ans=4;
    }
  }
  cout << ans << endl;
  return 0;
}