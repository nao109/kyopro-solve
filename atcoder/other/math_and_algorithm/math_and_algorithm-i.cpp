#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,s;
  cin >> n >> s;
  vector<int> a(n+1);
  for(int i=1; i<=n; ++i) cin >> a[i];
  
  vector<vector<bool>> dp(n+1,vector<bool>(10001));
  dp[0][0]=true;
  for(int i=1; i<=n; ++i){
    for(int j=1; j<=10000; ++j){
      dp[i][j]=dp[i-1][j];
      if(j>=a[i]) dp[i][j]=(dp[i-1][j] || dp[i-1][j-a[i]]);
    }
  }
  for(int i=1; i<=n; ++i){
    if(dp[i][s]){
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}