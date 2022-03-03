#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int x; cin >> x;
  if(x>=90) cout << "expert";
  else if(x>=70) cout << 90-x;
  else if(x>=40) cout << 70-x;
  else cout << 40-x;
  cout << endl;
  return 0;
}