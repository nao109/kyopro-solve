#include<bitsstdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i(n); ++i)
int main(){
  cout  fixed  setprecision(7);
  ll n; cin  n;
  vectorll a(n+1,0); a[0]=2,a[1]=1;
  for(ll i=2; in+1; ++i) a[i]=a[i-1]+a[i-2];
  cout  a[n]  endl;
  return 0;
}