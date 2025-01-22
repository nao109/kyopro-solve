#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  if(n<=125) cout << "4\n";
  else if(n>=212) cout << "8\n";
  else cout << "6\n";
  return 0;
}