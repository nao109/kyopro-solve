#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  int ans=1;
  while(n>ans) ans*=2;
  if(n<ans) cout << ans/2 << endl;
  else cout << ans << endl;
  return 0;
}