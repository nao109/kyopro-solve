#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  int ss=s.size();
  bool ans=true;
  for(int i=0; i<ss; ++i){
    if(s[ss-1-i]=='0') s.erase(ss-1-i);
    else{
      ss=s.size(); break;
    }
  }
  rep(i,ss){
    if(s[i]!=s[ss-1-i]){
      ans=false; break;
    }
  }
  if(ans) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}