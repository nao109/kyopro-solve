#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b; char c; cin >> a >> c >> b;
  if(c=='+') cout << a+b << "\n";
  else if(c=='-') cout << a-b << "\n";
  return 0;
}