#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s,t;
  cin >> s >> t;
  if(s.size()>t.size()) cout << "No\n";
  else{
    bool flag=true;
    for(int i=0; i<s.size(); ++i){
      if(s[i]!=t[i]) flag=false;
    }
    cout << (flag ? "Yes\n" : "No\n");
  }
  return 0;
}