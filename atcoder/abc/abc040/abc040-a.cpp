#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n,x; cin >> n >> x;
  cout << min(n-x,x-1) << endl;
  return 0;
}