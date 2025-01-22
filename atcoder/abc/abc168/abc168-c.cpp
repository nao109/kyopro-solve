#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  long double a,b,dh,dm,d; int h,m;
  cin >> a >> b >> h >> m;
  h=(h*60+m)%720;
  dh=h;
  dh/=2;
  dm=m*6;
  d=abs(dh-dm);
  long double l=sqrt(a*a+b*b-2*a*b*cos(d*acos(-1)/180));
  cout << fixed << setprecision(15) << l << endl;
  return 0;
}