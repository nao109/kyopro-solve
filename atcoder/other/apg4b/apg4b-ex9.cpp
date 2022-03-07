#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int x,a,b; cin >> x >> a >> b;
  ++x;
  cout << x << endl;
  x*=a+b;
  cout << x << endl;
  x*=x;
  cout << x << endl;
  --x;
  cout << x << endl;
  return 0;
}