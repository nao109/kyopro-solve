#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int d,n; cin >> d >> n;
  int ans;
  if(n<100) ans=pow(100,d)*n;
  else ans=pow(100,d)*n+pow(100,d);
  cout << ans << endl;
  return 0;
}