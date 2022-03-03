#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  vector<string> s(2);
  rep(i,2) cin >> s[i];
  if(s[0][0]=='.'&&s[0][1]=='#'&&s[1][0]=='#'&&s[1][1]=='.') cout << "No\n";
  else if(s[0][0]=='#'&&s[0][1]=='.'&&s[1][0]=='.'&&s[1][1]=='#') cout << "No\n";
  else cout << "Yes\n";
  return 0;
}