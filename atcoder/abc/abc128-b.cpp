#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
using P = pair<string,int>;
int main(){
  cout << fixed << setprecision(15);
  int n; cin >> n;
  vector<pair<P,int>> a(n);
  rep(i,n){
    cin >> a[i].fi.fi >> a[i].fi.se;
    a[i].fi.se*=-1; a[i].se=i+1;
  }
  sort(all(a));
  rep(i,n) cout << a[i].se << endl;
  return 0;
}