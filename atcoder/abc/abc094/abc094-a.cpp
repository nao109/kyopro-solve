#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b,x; cin >> a >> b >> x;
  if(a<=x&&x<=a+b) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}