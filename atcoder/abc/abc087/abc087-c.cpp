#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n;
  cin >> n;
  vector<vector<int>> a(2,vector<int>(n));
  for(int i=0; i<2; ++i){
    for(int j=0; j<n; ++j){
      cin >> a[i][j];
    }
  }
  vector<vector<int>> dp(2,vector<int>(n));
  dp[0][0]=a[0][0],dp[1][0]=a[0][0]+a[1][0];
  for(int j=1; j<n; ++j){
    dp[0][j]=dp[0][j-1]+a[0][j];
  }
  for(int j=1; j<n; ++j){
    dp[1][j]=max(dp[1][j-1],dp[0][j])+a[1][j];
  }
  cout << dp[1][n-1] << endl;
  return 0;
}