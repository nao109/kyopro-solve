#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> v(n); rep(i,n) cin >> v[i];
  vector<int> c(n); rep(i,n) cin >> c[i];
  int ans=0;
  rep(i,n){
    if(v[i]-c[i]>0) ans+=v[i]-c[i];
  }
  cout << ans << endl;
  return 0;
}