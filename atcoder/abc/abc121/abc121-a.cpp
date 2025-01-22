#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int H,W,h,w; cin >> H >> W >> h >> w;
  int ch=h*W+H*w-h*w;
  cout << H*W-ch << endl;
  return 0;
}