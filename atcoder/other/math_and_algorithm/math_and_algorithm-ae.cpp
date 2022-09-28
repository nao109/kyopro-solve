#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(12);
  ll ax,ay,bx,by,cx,cy;
  cin >> ax >> ay >> bx >> by >> cx >> cy;
  ll bax=ax-bx, bay=ay-by, bcx=cx-bx, bcy=cy-by, cax=ax-cx, cay=ay-cy, cbx=bx-cx, cby=by-cy;
  double ans;
  if(bax*bcx+bay*bcy<0) ans=sqrt(bax*bax+bay*bay);
  else if(cax*cbx+cay*cby<0) ans=sqrt(cax*cax+cay*cay);
  else{
    double s=abs(bax*cay-bay*cax), bc=sqrt(bcx*bcx+bcy*bcy);
    ans=s/bc;
  }
  cout << ans << endl;
  return 0;
}