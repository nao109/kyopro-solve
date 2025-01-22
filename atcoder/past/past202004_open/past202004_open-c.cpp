#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  char s[n][2*n-1];
  rep(i,n)rep(j,2*n-1) cin >> s[i][j];
  for(int i=n-2; i>=0; --i){
    for(int j=1; j<2*n-2; ++j){
      if(s[i][j]=='#'){
        if(s[i+1][j-1]=='X'||s[i+1][j]=='X'||s[i+1][j+1]=='X') s[i][j]='X';
      }
    }
  }
  rep(i,n){
    rep(j,2*n-1){
      cout << s[i][j];
      if(j==2*n-2) cout << endl;
    }
  }
  return 0;
}