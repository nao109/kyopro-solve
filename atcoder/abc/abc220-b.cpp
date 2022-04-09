#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
ll f(ll a, ll k){
  ll ak=0,ch=1;
  while(a>0){
    ak+=(a%10)*ch;
    a/=10; ch*=k;
  }
  return ak;
}
int main(){
  cout << fixed << setprecision(7);
  ll k,a,b; cin >> k >> a >> b;
  ll ak=f(a,k),bk=f(b,k);
  cerr << ak << " " << bk << endl;
  ll ans=ak*bk;
  cout << ans << endl;
  return 0;
}