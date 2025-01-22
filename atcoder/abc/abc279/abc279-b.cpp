#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s,t;
  cin >> s >> t;
  if(s.size()<t.size()){
    cout << "No\n";
    return 0;
  }
  for(int i=0; i<(int)s.size(); ++i){
    bool flag=false;
    for(int j=0; j<(int)t.size(); ++j){
      if(s[i+j]==t[j]) flag=true;
      else{
        flag=false;
        break;
      }
    }
    if(flag){
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}