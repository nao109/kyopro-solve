#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll a,b,x;
  cin >> a >> b >> x;
  ll ans=b/x;
  if(a>0) ans-=(a-1)/x;
  else ans++;
  cout << ans << endl;
  return 0;
}