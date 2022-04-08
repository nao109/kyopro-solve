#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  double a,b; cin >> a >> b;
  double ch=sqrt(a*a+b*b);
  a/=ch; b/=ch;
  cout << a << " " << b << endl;
  return 0;
}