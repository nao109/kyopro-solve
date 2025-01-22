#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  sort(s.begin(),s.end());
  int ss=s.size();
  vector<int> ch(26,0);
  rep(i,ss) ++ch[s[i]-'a'];
  bool ans=true;
  rep(i,26){
    if(ch[i]>1) ans=false;
  }
  if(ans) cout << "yes\n";
  else cout << "no\n";
  return 0;
}