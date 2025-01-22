#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int x,t; cin >> x >> t;
  if(x-t>=0) cout << x-t << endl;
  else if(x-t<0) cout << 0 << endl;
  return 0;
}