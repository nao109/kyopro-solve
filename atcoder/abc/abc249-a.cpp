#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  string s; cin >> s;
  int n=s.size();
  bool isAZ=false,isaz=false;
  set<char> c; bool single=true;
  rep(i,n){
    if(!isAZ&&'A'<=s[i]&&s[i]<='Z') isAZ=true;
    if(!isaz&&'a'<=s[i]&&s[i]<='z') isaz=true;
    if(c.count(s[i])){single=false; break;}
    else c.insert(s[i]);
  }
  //cerr << isAZ << isaz << single;
  if(!isAZ||!isaz||!single) cout << "No\n";
  else cout << "Yes\n";
  return 0;
}