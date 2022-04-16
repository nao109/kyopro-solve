#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
ll f(ll t,ll k){
  return 1+k*t;
}
int main(){
  cout << fixed << setprecision(15);
  ll a,k; cin >> a >> k;
  ll ans=0;
  if(k==0) ans=2000000000000-a;
  else{
    while(a<2000000000000){
      a=f(a,k); ++ans;
    }
  }
  cout << ans << endl;
  return 0;
}