#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int r,g,b; cin >> r >> g >> b;
  if((g*10+b)%4==0) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}