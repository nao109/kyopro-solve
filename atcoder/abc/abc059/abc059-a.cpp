#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s,t,u; cin >> s >> t >> u;
  s[0]=s[0]-'a'+'A';
  t[0]=t[0]-'a'+'A';
  u[0]=u[0]-'a'+'A';
  cout << s[0] << t[0] << u[0] << "\n";
  return 0;
}