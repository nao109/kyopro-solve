#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  double M=0;
  rep(i,n){
    double a,b,c,d,e; cin >> a >> b >> c >> d >> e;
    M=max(M,a+b+c+d+e*110/900);
  }
  cout << M << endl;
  return 0;
}