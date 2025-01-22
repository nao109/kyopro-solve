#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int k,x; cin >> k >> x;
  if(500*k<x) cout << "No\n";
  else cout << "Yes\n";
  return 0;
}