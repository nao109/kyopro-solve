#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n,m; cin >> n >> m;
  vector<int> a(n+1),c(n+m+1);
  rep(i,n+1) cin >> a[i]; rep(i,n+m+1) cin >> c[i];
  cout << c[0]/a[0] << endl;
  return 0;
}