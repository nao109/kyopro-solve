#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b; cin >> a >> b;
  a+=b;
  if(a%2==0) cout << a/2 << endl;
  else cout << "IMPOSSIBLE\n";
  return 0;
}