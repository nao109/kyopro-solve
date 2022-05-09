#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  cout << fixed << setprecision(15);
  int n; cin >> n;
  vector<pair<int,int>> a(n); rep(i,n){cin >> a[i].fi; a[i].se=i;}
  sort(all(a));
  rep(i,n){
    if(i!=a[n-1].se) cout << a[n-1].fi << endl;
    else cout << a[n-2].fi << endl;
  }
  return 0;
}