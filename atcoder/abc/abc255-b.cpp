#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,k;
  cin >> n >> k;
  set<int> a;
  for(int i=0; i<k; ++i){
    int c;
    cin >> c;
    a.insert(c);
  }
  vector<pair<double,double>> x(n);
  for(int i=0; i<n; ++i) cin >> x[i].fi >> x[i].se;
  double ma=0;
  for(int i=0; i<n; ++i){
    for(int j=i+1; j<n; ++j){
      if(a.count(i+1)!=a.count(j+1)){
        ma=max(sqrt((x[i].fi-x[j].fi)*(x[i].fi-x[j].fi)+(x[i].se-x[j].se)*(x[i].se-x[j].se)),ma);
      }
    }
  }
  cout << fixed << setprecision(15) << ma << endl;
  return 0;
}