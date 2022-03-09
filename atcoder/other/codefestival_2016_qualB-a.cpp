#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  string ch="CODEFESTIVAL2016";
  string s; cin >> s;
  int ans=0;
  rep(i,16){
    if(s[i]!=ch[i]) ++ans;
  }
  cout << ans << endl;
  return 0;
}