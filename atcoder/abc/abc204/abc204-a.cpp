#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int x,y; cin >> x >> y;
  if(x==y) cout << x;
  else cout << 3-x-y;
  cout << endl;
  return 0;
}