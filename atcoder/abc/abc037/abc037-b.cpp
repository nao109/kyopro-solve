#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n,q; cin >> n >> q;
  vector<int> a(n,0);
  rep(i,q){
    int l,r,t;
    cin >> l >> r >> t;
    for(int i=l-1; i<r; ++i){
      a[i]=t;
    }
  }
  rep(i,n) cout << a[i] << "\n";
  return 0;
}