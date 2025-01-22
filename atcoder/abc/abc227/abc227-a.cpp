#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n,k,a; cin >> n >> k >> a;
  if((k+a-1)%n==0) cout << (k+a-1)%n+n << endl;
  else cout << (k+a-1)%n << endl;
  return 0;
}