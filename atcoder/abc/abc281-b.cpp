#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s;
  cin >> s;
  if(s.size()==8){
    if('A'<=s[0] && s[0]<='Z' && 'A'<=s[7] && s[7]<='Z'){
      for(int i=2; i<7; ++i){
        if('1'<=s[1] && s[i]<='9'){
          bool flag=true;
          for(int i=2; i<7; ++i){
            if(s[i]<'0' || '9'<s[i]) flag=false;
          }
          if(flag){
            cout << "Yes\n";
            return 0;
          }
        }
      }
    }
  }
  cout << "No\n";
  return 0;
}