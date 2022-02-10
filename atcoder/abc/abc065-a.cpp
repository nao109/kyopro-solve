#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int x,a,b; cin >> x >> a >> b;
  if(a>=b) cout << "delicious\n";
  else if(b-a<=x) cout << "safe\n";
  else cout << "dangerous\n";
  return 0;
}