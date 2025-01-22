#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  int ans=0;
  vector<int> t(n);
  rep(i,n){
    cin >> t[i];
    ans+=t[i];
  }
  int m; cin >> m;
  vector<int> p(m); vector<int> x(m);
  rep(i,m) cin >> p[i] >> x[i];
  rep(i,m){
    int ch=ans-t[p[i]-1]+x[i];
    cout << ch << "\n";
  }
  return 0;
}