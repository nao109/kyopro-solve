#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n,k; cin >> n >> k;
  int ans=0;
  rep(i,n){
    int h; cin >> h;
    if(h>=k) ++ans;
  }
  cout << ans << endl;
  return 0;
}