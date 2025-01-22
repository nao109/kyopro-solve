#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int h1,w1,h2,w2;
  cin >> h1 >> w1 >> h2 >> w2;
  if(h1==h2||h1==w2||w1==h2||w1==w2) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}