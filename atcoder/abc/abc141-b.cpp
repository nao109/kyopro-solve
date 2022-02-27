#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  int ss=s.size();
  bool ans=true;
  rep(i,ss){
    if(i%2==0){
      if(s[i]!='R'&&s[i]!='U'&&s[i]!='D'){
        ans=false; break;
      }
    }
    else{
      if(s[i]!='L'&&s[i]!='U'&&s[i]!='D'){
        ans=false; break;
      }
    }
  }
  if(ans) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}