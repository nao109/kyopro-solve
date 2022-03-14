#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> x(n),y(n),r(n);
  rep(i,n) cin >> x[i] >> y[i] >> r[i];
  rep(i,n) cout << x[i] << " " << y[i] << " " << x[i]+1 << " " << y[i]+1 << endl;
  return 0;
}