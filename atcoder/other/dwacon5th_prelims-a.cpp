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
  vector<pair<double,int>> a(n); double ave=0;
  rep(i,n){
    cin >> a[i].fi; ave+=a[i].fi; a[i].se=i;
  }
  ave/=n;
  rep(i,n){
    a[i].fi=abs(a[i].fi-ave);
    cerr << a[i].fi << endl;
  }
  sort(a.begin(),a.end());
  cout << a[0].se << endl;
  return 0;
}