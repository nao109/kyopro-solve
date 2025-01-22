#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int h,w; cin >> h >> w;
  char c[h][w];
  rep(i,h)rep(j,w) cin >> c[i][j];
  rep(i,2*h)rep(j,w){
    if(j<w-1) cout << c[i/2][j];
    else cout << c[i/2][j] << "\n";
  }
  return 0;
}