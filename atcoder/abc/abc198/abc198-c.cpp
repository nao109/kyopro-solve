#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  double r,x,y;
  cin >> r >> x >> y;
  double l=sqrt(x*x+y*y);
  if(l!=r && l<=2*r) cout << 2 << endl;
  else cout << ceil(l/r) << endl;
  return 0;
}