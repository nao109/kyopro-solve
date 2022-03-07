#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int a,b; char op; cin >> a >> op >> b;
  if(op=='?'||op=='='||op=='!') cout << "error\n";
  else if(op=='+') cout << a+b << endl;
  else if(op=='-') cout << a-b << endl;
  else if(op=='*') cout << a*b << endl;
  else{
    if(b==0) cout << "error\n";
    else cout << (int)(a/b) << endl;
  }
  return 0;
}