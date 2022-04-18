#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  long double sx,sy,gx,gy; cin >> sx >> sy >> gx >> gy;
  long double ans=abs(gx-sx)*sy/(sy+gy);
  if(sx<gx) ans=sx+ans;
  else ans=sx-ans;
  cout << ans << endl;
  return 0;
}