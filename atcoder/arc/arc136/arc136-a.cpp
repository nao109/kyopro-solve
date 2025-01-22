#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; string s; cin >> n >> s;
  string t="";
  rep(i,n){
    if(s[i]=='A') t+="BB";
    else t+=s[i];
  }
  s="";
  int ts=t.size();
  rep(i,ts){
    if(t[i]!='B') s+=t[i];
    else if(t[i+1]=='B'){
      s+='A'; ++i;
    }
    else s+=t[i];
  }
  cout << s << endl;
  return 0;
}