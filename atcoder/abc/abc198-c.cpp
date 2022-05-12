#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  double r,x,y;
  cin >> r >> x >> y;
  double l=sqrt(x*x+y*y);
  double ans=ceil(l/r);
  cout << ans << endl;
  return 0;
}