#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n,a; cin >> n >> a;
  rep(i,n){
    char op; int b; cin >> op >> b;
    if(op=='/'&&b==0){
      cout << "error\n"; break;
    }
    else{
      if(op=='+') a+=b;
      else if(op=='-') a-=b;
      else if(op=='*') a*=b;
      else a/=b;
      cout << i+1 << ':' << a << endl;
    }
  }
  return 0;
}