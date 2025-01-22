#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int a,b; cin >> a >> b;
  if(abs(a%10-b%10)==1||(a==9&&b==10)) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}