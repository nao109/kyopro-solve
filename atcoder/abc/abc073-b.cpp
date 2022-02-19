#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  int ans=0;
  rep(i,n){
    int l,r; cin >> l >> r;
    ans+=r-l+1;
  }
  cout << ans << endl;
  return 0;
}