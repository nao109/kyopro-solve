#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int a,b; cin >> a >> b;
  if(a>0&&b==0) cout << "Gold\n";
  else if(a==0&&b>0) cout << "Silver\n";
  else cout << "Alloy\n";
  return 0;
}