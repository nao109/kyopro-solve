#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  int ss=s.size();
  vector<int> ch(26,0);
  rep(i,ss){
    ++ch[s[i]-'a'];
  }
  bool ans=true;
  rep(i,26){
    if(ch[i]%2==0) continue;
    else{
      ans=false; break;
    }
  }
  if(ans) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}