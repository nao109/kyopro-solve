#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n,a,x,y; cin >> n >> a >> x >> y;
  int ans=0;
  if(n<=a) ans=x*n;
  else ans=x*a+y*(n-a);
  cout << ans << endl;
  return 0;
}