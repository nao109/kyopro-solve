#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b,c; cin >> a >> b >> c;
  if(a+b==c||a+c==b||b+c==a) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}