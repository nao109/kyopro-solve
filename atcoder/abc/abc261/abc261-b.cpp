#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<vector<char>> a(n,vector<char>(n));
  for(int i=0; i<n; ++i){
    for(int j=0; j<n; ++j){
      cin >> a[i][j];
    }
  }
  for(int i=0; i<n; ++i){
    for(int j=0; j<n; ++j){
      if((a[i][j]=='W' && a[j][i]!='L') || (a[i][j]=='L' && a[j][i]!='W') || (a[i][j]=='D' && a[j][i]!='D')){
        cout << "incorrect\n";
        return 0;
      }
    }
  }
  cout << "correct\n";
  return 0;
}