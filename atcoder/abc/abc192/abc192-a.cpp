#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int x; cin >> x;
  if(x%100==0) cout << 100;
  else cout << 100-(x%100);
  cout << endl;
  return 0;
}