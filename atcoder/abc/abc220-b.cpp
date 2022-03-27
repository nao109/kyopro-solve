#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  ll k,a,b; cin >> k >> a >> b;
  ll a10=0,b10=0,ch=1;
  rep(i,10){
    a10+=(a%10)*ch; b10+=(b%10)*ch;
    a/=10; b/=10;
    ch*=k;
  }
  cerr << a10 << " " << b10 << endl;
  cout << ll(a10*b10) << endl;
  return 0;
}