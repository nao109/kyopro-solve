#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int k,n; cin >> k >> n;
  vector<int> a(n); rep(i,n) cin >> a[i];
  int diffmax=k+a[0]-a[n-1];
  rep(i,n-1){
    diffmax=min(diffmax,a[i+1]-a[i]);
  }
  cout << diffmax << endl;
  return 0;
}