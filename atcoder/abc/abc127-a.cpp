#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b; cin >> a >> b;
  if(a>=13) cout << b;
  else if(a>=6) cout << b/2;
  else cout << 0;
  cout << endl;
  return 0;
}