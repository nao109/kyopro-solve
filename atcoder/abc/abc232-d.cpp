#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const int inf = 1000000000;
int main(){
  int h,w;
  cin >> h >> w;
  vector<string> c(h);
  for(int i=0; i<h; ++i) cin >> c[i];
  vector<vector<int>> dp(h,vector<int>(w));
  dp[0][0]=1;
  for(int i=0; i<h; ++i){
    for(int j=0; j<w; ++j){
      if(i==0 && j==0) continue;
      if(c[i][j]=='#') dp[i][j]=-inf;
      else if(i==0) dp[i][j]=dp[i][j-1]+1;
      else if(j==0) dp[i][j]=dp[i-1][j]+1;
      else dp[i][j]=max(dp[i-1][j],dp[i][j-1])+1;
    }
  }
  int ma=1;
  for(int i=0; i<h; ++i){
    for(int j=0; j<w; ++j){
      ma=max(dp[i][j],ma);
    }
  }
  cout << ma << endl;
  return 0;
}