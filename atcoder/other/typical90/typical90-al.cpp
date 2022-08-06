#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll a,b,ch=1000000000000000000;
  cin >> a >> b;
  if(a>b) swap(a,b);
  b/=gcd(a,b);
  if(ch/a/b<1) cout << "Large\n";
  else cout << a*b << endl;
  return 0;
}