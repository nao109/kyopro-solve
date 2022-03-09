#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int a,b; string s;
  cin >> a >> b >> s;
  bool ans=true;
  rep(i,a+b+1){
    if(i<a){
      if('0'<=s[i]&&s[i]<='9') continue;
      else{
        ans=false; break;
      }
    }
    else if(i==a){
      if(s[i]!='-') ans=false; break;
    }
    else{
      if('0'<=s[i]&&s[i]<='9') continue;
      else{
        ans=false; break;
      }
    }
  }
  if(ans) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}