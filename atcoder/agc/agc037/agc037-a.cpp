#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s;
  cin >> s;
  int n=s.size();
  string t,u;
  t=s[0];
  int ans=1;
  for(int i=1; i<n; ++i){
    u.push_back(s[i]);
    if(t!=u){
      ++ans;
      t=u;
      u="";
    }
  }
  cout << ans << endl;
  return 0;
}