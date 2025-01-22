#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,a,b;
  cin >> n >> a >> b;
  ll sum=0;
  ll divab=(n/(a*b/gcd(a,b)));
  sum+=n/a*(n/a+1)/2*a;
  sum+=(n/b)*(n/b+1)/2*b;
  sum-=divab*(divab+1)/2*(a*b/gcd(a,b));
  ll ans=n*(n+1)/2-sum;
  cout << ans << endl;
  return 0;
}