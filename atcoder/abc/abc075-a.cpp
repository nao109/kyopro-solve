#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b,c; cin >> a >> b >> c;
  if(a==b) cout << c;
  else if(a==c) cout << b;
  else cout << a;
  cout << endl;
  return 0;
}