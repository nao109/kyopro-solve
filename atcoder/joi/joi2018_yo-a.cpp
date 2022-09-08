#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,a,b,c,d;
  cin >> n >> a >> b >> c >> d;
  ll ans=min(((n+a-1)/a)*b, ((n+c-1)/c)*d);
  cout << ans << endl;
  return 0;
}