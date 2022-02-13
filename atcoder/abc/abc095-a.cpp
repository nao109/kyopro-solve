#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  int ans=700;
  rep(i,3){
    if(s[i]=='o') ans+=100;
  }
  cout << ans << endl;
  return 0;
}