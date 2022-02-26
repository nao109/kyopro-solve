#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  int ans=0;
  if(n<10) ans=n;
  else if(n<100) ans=9;
  else if(n<1000) ans=n-90;
  else if(n<10000) ans=909;
  else if(n<100000) ans=n-9090;
  else ans=90909;
  cout << ans << endl;
  return 0;
}