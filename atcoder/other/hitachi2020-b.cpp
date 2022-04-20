#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int a,b,m; cin >> a >> b >> m;
  vector<int> ca(a),cb(b);
  rep(i,a) cin >> ca[i]; rep(i,b) cin >> cb[i];
  vector<int> x(m),y(m),c(m);
  rep(i,m) cin >> x[i] >> y[i] >> c[i];
  int cost=200000;
  rep(i,m){
    int sum=ca[x[i]-1]+cb[y[i]-1]-c[i];
    cost=min(cost,sum);
  }
  sort(ca.begin(),ca.end()); sort(cb.begin(),cb.end());
  int ans=min(ca[0]+cb[0],cost);
  cout << ans << endl;
  return 0;
}