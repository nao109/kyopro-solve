#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n,m; cin >> n >> m;
  int b[n][m]; rep(i,n)rep(j,m) cin >> b[i][j];
  bool ans=true;
  rep(i,n){
    rep(j,m){
      if(i>0&&j==0){
        if(b[i][0]!=b[i-1][0]+7){cout << "No\n"; return 0;}
      }
      else if(j>0){
        if(b[i][j]!=b[i][j-1]+1){cout << "No\n"; return 0;}
      }
    }
  }
  cout << "Yes\n";
  return 0;
}