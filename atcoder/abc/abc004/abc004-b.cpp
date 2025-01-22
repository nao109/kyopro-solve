#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  char c[4][4];
  rep(i,4)rep(j,4){
    cin >> c[i][j];
  }
  rep(i,4)rep(j,4){
    if(j<3) cout << c[3-i][3-j] << " ";
    else cout << c[3-i][3-j] << endl;
  }
  return 0;
}