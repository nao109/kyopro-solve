#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  bool ans=0;
  if(n%3==0) ans=1;
  if(ans) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}