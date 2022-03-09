#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n,x; cin >> n >> x;
  vector<int> a(n); rep(i,n) cin >> a[i];
  sort(a.begin(),a.end());
  int cnt=0;
  rep(i,n){
    if(x>=a[i]){
      x-=a[i]; ++cnt;
    }
  }
  if(x>0) cout << cnt-1 << endl;
  else cout << cnt << endl;
  return 0;
}