#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  int ss=s.size();
  string ans="";
  rep(i,ss){
    if(s[i]=='0') ans+='0';
    else if(s[i]=='1') ans+='1';
    else{
      int anss=ans.size();
      if(!ans.empty()) ans.erase(anss-1);
    }
  }
  cout << ans << endl;
  return 0;
}