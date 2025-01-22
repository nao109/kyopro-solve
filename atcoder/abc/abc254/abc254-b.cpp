#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<vector<int>> a(n);
  for(int i=0; i<n; ++i){
    for(int j=0; j<=i; ++j){
      if(j==0 || j==i) a[i].push_back(1);
      else a[i].push_back(a[i-1][j-1]+a[i-1][j]);
    }
  }
  for(int i=0; i<n; ++i){
    for(int j=0; j<=i; ++j){
      cout << a[i][j] << (j<i ? " " : "\n");
    }
  }
  return 0;
}