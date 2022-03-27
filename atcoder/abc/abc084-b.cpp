#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int a,b; string s; cin >> a >> b >> s;
  bool ans=true;
  rep(i,a+b+1){
    if(0<=i&&i<a){
      if(s[i]<'0'||'9'<s[i]){
        //cerr << 1 << endl;
        ans=false; break;
      }
    }
    else if(i==a){
      if(s[i]!='-'){
        //cerr << 2 << endl;
        ans=false; break;
      }
    }
    else{
      if(s[i]<'0'||'9'<s[i]){
        //cerr << 3 << endl;
        ans=false; break;
      }
    }
  }
  if(ans) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}