#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  bool ans=false;
  rep(i,3){
    if(s[i]==s[i+1]){
      ans=true; break;
    }
  }
  if(ans) cout << "Bad\n";
  else cout << "Good\n";
  return 0;
}