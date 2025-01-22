#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b; cin >> a >> b;
  if((a*b)%2==0) cout << "Even\n";
  else cout << "Odd\n";
  return 0;
}