#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
  int y3=y2-(x1-x2),y4=y1-(x1-x2);
  int x3=x2-(y2-y1),x4=x3+(x1-x2);
  cout << x3  << " " << y3 << " " << x4 << " " << y4 << endl;
  return 0;
}