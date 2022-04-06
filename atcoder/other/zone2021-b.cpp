#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n,D,H; cin >> n >> D >> H;
  vector<double> d(n),h(n); rep(i,n) cin >> d[i] >> h[i];
  double max_h=0;
  rep(i,n){
    max_h=max(max_h,(D*h[i]-d[i]*H)/(D-d[i]));
    cerr << max_h << endl;
  }
  cout << max_h << endl;
  return 0;
}