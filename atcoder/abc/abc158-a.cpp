#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  if(s[0]==s[1]&&s[0]==s[2]) cout << "No\n";
  else cout << "Yes\n";
  return 0;
}