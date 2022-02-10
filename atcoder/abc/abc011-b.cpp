#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  int ss=s.size();
  if('a'<=s[0]&&s[0]<='z') s[0]=s[0]-'a'+'A';
  rep(i,ss-1){
    if('A'<=s[i+1]&&s[i+1]<='Z') s[i+1]=s[i+1]-'A'+'a';
  }
  cout << s << endl;
  return 0;
}