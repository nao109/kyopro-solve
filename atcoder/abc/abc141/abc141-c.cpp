#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n,k,q; cin >> n >> k >> q;
  vector<int> p(n,0);
  rep(i,q){
    int a; cin >> a;
    ++p[a-1];
  }
  rep(i,n){
    if(k-(q-p[i])<=0) cout << "No\n";
    else cout << "Yes\n";
  }
  return 0;
}