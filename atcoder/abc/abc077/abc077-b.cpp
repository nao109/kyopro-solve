#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  int ans=1;
  for(int i=1; i*i<=n; ++i){
    ans=i*i;
  }
  cout << ans << endl;
  return 0;
}