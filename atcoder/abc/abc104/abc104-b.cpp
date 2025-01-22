#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  string s; cin >> s;
  int ss=s.size();
  bool ans=true;
  if(s[0]=='A'&&s[1]!='C'&&s[ss-1]!='C'){
    int isC=0;
    for(int i=2; i<ss-1; ++i){
      if(s[i]=='C') ++isC;
    }
    if(isC==1){
      int sl=0;
      rep(i,ss){
        if('a'<=s[i]&&s[i]<='z') ++sl;
      }
      if(sl<ss-2) ans=false;
    }
    else ans=false;
  }
  else ans=false;
  if(ans) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}