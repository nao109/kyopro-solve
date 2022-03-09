#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  string s[4]={"ch","o","k","u"};
  string t; cin >> t;
  int ts=t.size();
  while(!t.empty()){
    int ch=0;
    rep(i,4){
      if(t.find(s[i])!=string::npos){
        ch=1;
        if(i==0) t.erase(t.find(s[i]),2);
        else t.erase(t.find(s[i]),1);
      }
    }
    if(ch==0) break;
  }
  if(t.empty()) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}