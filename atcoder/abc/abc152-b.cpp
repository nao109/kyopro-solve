#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int a,b; cin >> a >> b;
  string s,t;
  rep(i,b) s.push_back('0'+a);
  rep(i,a) t.push_back('0'+b);
  if(s<=t) cout << s << endl;
  else cout << t << endl;
  return 0;
}