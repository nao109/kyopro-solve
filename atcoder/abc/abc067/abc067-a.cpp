#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b; cin >> a >> b;
  if(a%3==0||b%3==0||(a+b)%3==0) cout << "Possible\n";
  else cout << "Impossible\n";
  return 0;
}