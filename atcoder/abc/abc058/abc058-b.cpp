#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s,t; cin >> s >> t;
  int ss=s.size(),ts=t.size();
  rep(i,ts) cout << s[i] << t[i];
  if(ss==ts) cout << "\n";
  else cout << s[ss-1] << "\n";
  return 0;
}