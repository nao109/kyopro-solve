#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n,m; cin >> n >> m;
  cout << n*(n-1)/2+m*(m-1)/2 << endl;
  return 0;
}