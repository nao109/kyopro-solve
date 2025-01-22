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
    a.insert(c-1);
  }
  vector<double> x(n),y(n);
  for(int i=0; i<n; ++i) cin >> x[i] >> y[i];
  double ans=0;
  for(int i=0; i<n; ++i){      
    double mi=LLONG_MAX;
    for(ll j:a){
      mi=min(sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])),mi);
    }
    ans=max(mi,ans);
  }
  cout << fixed << setprecision(15) << ans << endl;
  return 0;
}