#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  if(n%2==1) cout << "No\n";
  else{
    string s; cin >> s;
    bool ans=true;
    rep(i,n/2){
      if(s[i]!=s[n/2+i]){
        ans=false; break;
      }
    }
    if(ans) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}