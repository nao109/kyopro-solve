#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b,c,d; cin >> a >> b >> c >> d;
  if(a+b==c+d) cout << "Balanced\n";
  else if(a+b>c+d) cout << "Left\n";
  else cout << "Right\n";
  return 0;
}