#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  ll a,b,c,d; cin >> a >> b >> c >> d;
  cout << b-b/c-b/d+b/(c*d/gcd(c,d))-a+1+(a-1)/c+(a-1)/d-(a-1)/(c*d/gcd(c,d)) << endl;
  return 0;
}