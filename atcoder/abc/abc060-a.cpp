#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string a,b,c; cin >> a >> b >> c;
  int as=a.size(),bs=b.size();
  if(a[as-1]==b[0]&&b[bs-1]==c[0]) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}