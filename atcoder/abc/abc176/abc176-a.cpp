#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n,x,t; cin >> n >> x >> t;
  cout << ((n+x-1)/x)*t << endl;
  return 0;
}