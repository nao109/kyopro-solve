#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  sort(s.begin(),s.end());
  if(s[0]==s[2]) cout << 1;
  else if(s[0]==s[1]) cout << 3;
  else if(s[1]==s[2]) cout << 3;
  else cout << 6;
  cout << endl;
  return 0;
}