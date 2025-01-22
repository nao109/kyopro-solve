#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  string s;
  cin >> n >> s;

  string ans="";
  for(int i=0; i<n; ++i){
    if(ans.back()==s[i]){
      ans.back()-=32;
      ans+=s[i]-32;
    }
    else ans+=s[i];
  }

  cout << ans << endl;
  return 0;
}