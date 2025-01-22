#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int a,b; cin >> a >> b;
  if(a+b>=15&&b>=8) cout << 1;
  else if(a+b>=10&&b>=3) cout << 2;
  else if(a+b>=3) cout << 3;
  else cout << 4;
  cout << endl; 
  return 0;
}