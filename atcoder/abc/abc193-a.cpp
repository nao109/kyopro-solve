#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  double a,b; cin >> a >> b;
  cout << (1-b/a)*100 << endl;
  return 0;
}