#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  int ss=s.size();
  if(s[ss-1]=='s') cout << s+"es\n";
  else cout << s+"s\n";
  return 0;
}