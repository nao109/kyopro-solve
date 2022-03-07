#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n,m; cin >> n >> m;
  vector<vector<char>> r(n,vector<char>(n,'-'));
  rep(i,m){
    int a,b; cin >> a >> b;
    r.at(a-1).at(b-1)='o';
    r.at(b-1).at(a-1)='x';
  }
  rep(i,n){
    rep(j,n){
      cout << r.at(i).at(j);
      if(j<n-1) cout << " ";
      else cout << endl;
    }
  }
  return 0;
}