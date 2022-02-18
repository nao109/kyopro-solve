#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s,t; cin >> s >> t;
  int ss=s.size();
  bool ans=true;
  rep(i,ss){
    if(s[i]!=t[i]){
      ans=false;
      break;
    }
  }
  if(ans) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}