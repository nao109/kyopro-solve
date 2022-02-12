#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  char x,y; cin >> x >> y;
  if(x<y) cout << "<\n";
  else if(x>y) cout << ">\n";
  else cout << "=\n";
  return 0;
}