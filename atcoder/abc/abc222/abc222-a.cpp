#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  if(n>=1000) cout << n << endl;
  else if(n>=100) cout << "0" << n << endl;
  else if(n>=10) cout << "00" << n << endl;
  else cout << "000" << n << endl;
  return 0;
}