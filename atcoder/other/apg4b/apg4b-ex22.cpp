#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<pair<int,int>> a(n);
  rep(i,n) cin >> a[i].se >> a[i].fi;
  sort(a.begin(),a.end());
  rep(i,n) cout << a[i].se << a[i].fi;
  return 0;
}