#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  vector<vector<int>> a(4,vector<int>(4));
  for(int i=0; i<4; ++i){
    for(int j=0; j<4; ++j){
      cin >> a[i][j];
    }
  }

  bool flag=false;
  for(int i=0; i<4; ++i)for(int j=0; j<4; ++j){
    if(i<3 && a[i][j]==a[i+1][j]) flag=true;
    if(j<3 && a[i][j]==a[i][j+1]) flag=true;
  }
  
  cout << (flag ? "CONTINUE\n" : "GAMEOVER\n");
  return 0;
}