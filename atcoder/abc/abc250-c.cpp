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
  int n,q; cin >> n >> q;
  vector<pair<int,int>> a(n);
  rep(i,n){a[i+1].fi=i+1; a[i+1].se=i+1;}
  rep(i,q){
    int x; cin >> x;
    sort(all(a));
    auto itr=lower_bound(all(a),pair<int,int>{x,-1});
    int d=distance(a.begin(), itr);
    if(d<n){
      swap(a[d].fi,a[d+1].fi);
    }
    else{
      swap(a[d].fi,a[d-1].fi);
    }
  }
  rep(i,n){
    cout << a[i].se;
    if(i<n) cout << " ";
    else cout << endl;
  }
  return 0;
}