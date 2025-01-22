#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int v,t,s,d; cin >> v >> t >> s >> d;
  if(v*t<=d&&d<=v*s) cout << "No\n";
  else cout << "Yes\n";
  return 0;
}