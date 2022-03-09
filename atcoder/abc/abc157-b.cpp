#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int ai[3][3];
  rep(i,3)rep(j,3){
    cin >> ai[i][j];
  }
  int n; cin >> n;
  vector<int> b(n); rep(i,n) cin >> b[i];
  bool ab[3][3]={};
  rep(i,3)rep(j,3){
    rep(k,n){
      if(ai[i][j]==b[k]) ab[i][j]=true;
    }
  }
  bool ans=false;
  rep(i,3){
    if(ab[i][0]&&ab[i][1]&&ab[i][0]){ans=true; break;}
    else if(ab[0][i]&&ab[1][i]&&ab[2][i]){ans=true; break;}
  }
  if(!ans){
    if(ab[0][0]&&ab[1][1]&&ab[2][2]) ans=true;
    if(ab[0][2]&&ab[1][1]&&ab[2][0]) ans=true;
  }
  if(ans) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}