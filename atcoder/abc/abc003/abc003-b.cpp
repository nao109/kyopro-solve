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
    if(s[i]==t[i]) continue;
    if(s[i]=='@'){
      if(t[i]=='a'||t[i]=='t'||t[i]=='c'||t[i]=='o'||t[i]=='d'||t[i]=='e'||t[i]=='r'||t[i]=='@') continue;
      else ans=false;
    }
    else if(t[i]=='@'){
      if(s[i]=='a'||s[i]=='t'||s[i]=='c'||s[i]=='o'||s[i]=='d'||s[i]=='e'||s[i]=='r') continue;
      else ans=false;
    }
    else ans=false;
    if(!ans) break;
  }
  if(ans) cout << "You can win\n";
  else cout << "You will lose\n";
  return 0;
}