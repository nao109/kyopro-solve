#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll a,b,c,d;
  cin >> a >> b >> c >> d;
  ll ans=max(max(a*c,a*d),max(b*c,b*d));
  cout << ans << endl;
  return 0;
}