#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  string s; cin >> s;
  rep(i,s.size()){
    if(s[i]=='O'||s[i]=='D') s[i]='0';
    else if(s[i]=='I') s[i]='1';
    else if(s[i]=='Z') s[i]='2';
    else if(s[i]=='S') s[i]='5';
    else if(s[i]=='B') s[i]='8';
  }
  cout << s << endl;
  return 0;
}