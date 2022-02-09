#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b,c; cin >> a >> b >> c;
  int ans=0;
  ans=c/min(a,b);
  c%=min(a,b);
  ans+=c/max(a,b);
  cout << ans << endl;
  return 0;
}