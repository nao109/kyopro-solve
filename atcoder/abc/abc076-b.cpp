#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n,k; cin >> n >> k;
  vector<int> x(n); rep(i,n) cin >> x[i];
  int ans=0;
  rep(i,n){
    ans+=2*min(k-x[i],x[i]);
  }
  cout << ans << endl;
  return 0;
}