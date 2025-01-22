#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b,c; cin >> a >> b >> c;
  int ans=a*b+b*c+c*a;
  ans*=2;
  cout << ans << endl;
  return 0;
}