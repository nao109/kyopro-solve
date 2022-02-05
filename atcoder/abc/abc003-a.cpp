#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  double n; cin >> n;
  double ans=0;
   ans=0;
  rep(i,n) ans+=i+1;
  ans/=n;
  cout << ans*10000 << endl;
  return 0;
}