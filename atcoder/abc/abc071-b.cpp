#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  vector<bool> ch(26,false);
  string s; cin >> s;
  int ss=s.size();
  rep(i,ss) ch[s[i]-'a']=true;
  bool ans=true; char c='a';
  rep(i,26){
    if(!ch[i]){
      ans=false;
      c+=i;
      break;
    }
  }
  if(ans) cout << "None\n";
  else cout << c << endl;
  return 0;
}