#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s;
  cin >> s;
  if(s.size()!=8) cout << "No\n";
  else if(!('A'<=s[0] && s[0]<='Z')) cout << "No\n";
  else if(!('A'<=s[7] && s[7]<='Z')) cout << "No\n";
  else if(!('1'<=s[1] && s[1]<='9')) cout << "No\n";
  else{
    for(int i=2; i<7; ++i){
      if(!('0'<=s[i] && s[i]<='9')){
        cout << "No\n";
        return 0;
      }
    }
    cout << "Yes\n";
  }
  return 0;
}