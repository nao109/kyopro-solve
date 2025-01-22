#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s,t; cin >> s >> t;
  if(s[0]==t[2]&&s[1]==t[1]&&s[2]==t[0]) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}