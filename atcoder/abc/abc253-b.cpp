#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int h,w;
  cin >> h >> w;
  bool cnt=false;
  int x1,x2,y1,y2;
  for(int i=0; i<h; ++i){
    string s; cin >> s;
    for(int j=0; j<w; ++j){
      if(s[j]=='o'){
        if(!cnt){
          x1=i,y1=j;
          cnt=true;
        }
        else{
          x2=i,y2=j;
        }
      }
    }
  }
  cout << abs(x1-x2)+abs(y1-y2) << endl;
  return 0;
}