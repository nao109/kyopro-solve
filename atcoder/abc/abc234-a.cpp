#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int f(int x){
  return x*x+2*x+3;
}
int main(){
  cout << fixed << setprecision(7);
  int t; cin >> t;
  cout << f(f(f(t)+t)+f(f(t))) << endl;
  return 0;
}