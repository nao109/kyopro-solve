#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int a,b,c,n; cin >> a >> b >> c >> n;
  int ans=0;
  rep(i,a+1)rep(j,b+1)rep(k,c+1){
    if(500*i+100*j+50*k==n){
      ++ans;
    }
  }
  cout << ans << endl;
  return 0;
}