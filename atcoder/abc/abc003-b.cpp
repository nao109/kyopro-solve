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
      if(t[i]=='a') continue;
      else if(t[i]=='t') continue;
      else if(t[i]=='c') continue;
      else if(t[i]=='o') continue;
      else if(t[i]=='d') continue;
      else if(t[i]=='e') continue;
      else if(t[i]=='r') continue;
      else if(t[i]=='@') continue;
      else ans=false;
    }
    else if(t[i]=='@'){
      if(s[i]=='a') continue;
      else if(s[i]=='t') continue;
      else if(s[i]=='c') continue;
      else if(s[i]=='o') continue;
      else if(s[i]=='d') continue;
      else if(s[i]=='e') continue;
      else if(s[i]=='r') continue;
      else ans=false;
    }
    else ans=false;
    if(!ans) break;
  }
  if(ans) cout << "You can win\n";
  else cout << "You will lose\n";
  return 0;
}