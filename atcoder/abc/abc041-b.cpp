#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  ll a,b,c; cin >> a >> b >> c;
  const ll ch=1000000007;
  a=a%ch,b=b%ch,c=c%ch;
  a=(a*b)%ch;
  a=(a*c)%ch;
  cout << a << endl;
  return 0;
}