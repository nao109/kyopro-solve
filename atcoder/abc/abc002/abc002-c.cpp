#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  vector<double> x(3,0);
  vector<double> y(3,0);
  rep(i,3) cin >> x[i] >> y[i];
  rep(i,2){
    x[i+1]-=x[0]; y[i+1]-=y[0];
  }
  double ans=max(x[2]*y[1]-x[1]*y[2],x[1]*y[2]-x[2]*y[1])/2;
  cout << ans << "\n";
  return 0;
}