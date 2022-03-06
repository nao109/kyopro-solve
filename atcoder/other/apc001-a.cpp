#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  ll x,y; cin >> x >> y;
  if(x%y==0) cout << -1 << endl;
  else cout << x << endl;
  return 0;
}