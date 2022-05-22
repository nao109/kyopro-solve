#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  vector<vector<int>> c(3,vector<int>(3));
  for(int i=0; i<3; ++i){
    for(int j=0; j<3; ++j){
      cin >> c[i][j];
    }
  }
  bool ans=true;
  for(int i=0; i<2; ++i){
    for(int j=0; j<2; ++j){
      if(c[i+1][j]-c[i][j]!=c[i+1][j+1]-c[i][j+1]) ans=false;
      if(c[j][i+1]-c[j][i]!=c[j+1][i+1]-c[j+1][i]) ans=false;
    }
  }
  cout << (ans?"Yes\n":"No\n");
  return 0;
}