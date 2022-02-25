#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n,m,c; cin >> n >> m >> c;
  vector<int> b(m); rep(i,m) cin >> b[i];
  vector<int> a(m); int ans=0;
  rep(i,n){
    int sum=c;
    rep(i,m){
      cin >> a[i];
      sum+=a[i]*b[i];
    }
    if(sum>0) ++ans;
  }
  cout << ans << endl;
  return 0;
}