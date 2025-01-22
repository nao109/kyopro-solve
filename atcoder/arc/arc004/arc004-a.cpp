#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n; cin >> n;
  double l=0;
  vector<pair<double,double>> x(n);
  for(int i=0; i<n; ++i){
    cin >> x[i].fi >> x[i].se;
  }
  for(int i=0; i<n; ++i){
    for(int j=0; j<n; ++j){
      if(i!=j){
        l=max(l,sqrt((x[i].fi-x[j].fi)*(x[i].fi-x[j].fi)+(x[i].se-x[j].se)*(x[i].se-x[j].se)));
      }
    }
  }
  cout << fixed << setprecision(15) << l << endl;
  return 0;
}