#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  double x1,y1,r1,x2,y2,r2;
  cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
  double l=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  int p;
  if(abs(r2-r1)>l) p=1;
  else if(abs(r2-r1)==l) p=2;
  else if(r1+r2==l) p=4;
  else if(r1+r2<l) p=5;
  else p=3;
  cout << p << endl;
  return 0;
}