#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  if(pow(2,n)>n*n) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}