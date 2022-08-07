#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s,t;
  cin >> s >> t;
  if(s==t) cout << "same\n";
  else{
    for(int i=0; i<3; ++i){
      if('A'<=s[i]&& s[i]<='Z') s[i]=s[i]-'A'+'a';
      if('A'<=t[i]&& t[i]<='Z') t[i]=t[i]-'A'+'a';
    }
    if(s==t) cout << "case-insensitive\n";
    else cout << "different\n";
  }
  return 0;
}