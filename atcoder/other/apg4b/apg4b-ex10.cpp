#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int a,b; cin >> a >> b;
  cout << "A:";
  rep(i,a) cout << "]";
  cout << endl;
  cout << "B:";
  rep(i,b) cout << "]";
  cout << endl;
  return 0;
}