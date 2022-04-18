#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  ll a,b,x; cin >> a >> b >> x;
  ll ans=b/x-(a-1)/x;
  cout << ans << endl;
  return 0;
}