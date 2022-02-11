#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll a = 1000000007;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  ll ans=1;
  rep(i,n) ans=(ans*(i+1))%a;
  cout << ans << "\n";
  return 0;
}