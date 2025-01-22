#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<double> x(n);
  double p=0;
  rep(i,n){
    cin >> x[i];
    p+=x[i];
  }
  p/=n;
  int pmin=p,pmax=p+1;
  int chmin=0,chmax=0;
  rep(i,n){
    chmin+=(x[i]-pmin)*(x[i]-pmin);
    chmax+=(x[i]-pmax)*(x[i]-pmax);
  }
  cout << min(chmin,chmax) << endl;
  return 0;
}