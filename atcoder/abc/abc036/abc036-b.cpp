#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  char s[n][n];
  rep(i,n)rep(j,n) cin >> s[i][j];
  rep(i,n)for(int j=n-1; j>=0; --j){
    if(j>0) cout << s[j][i];
    else cout << s[j][i] << "\n";
  }
  return 0;
}