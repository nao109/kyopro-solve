#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  double n,m; cin >> n >> m;
  n=360*(((int)n%12)*60+m)/720; m=360*m/60;
  cerr << n << " " << m << endl;
  long double r=abs(n-m); r=min(r,360-r);
  cout << r << endl;
  return 0;
}