#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  cout << fixed << setprecision(15);
  int n,x; cin >> n >> x;
  vector<int> a(n),b(n); rep(i,n) cin >> a[i] >> b[i];
  vector<vector<bool>> dp(n+1,vector<bool>(x+1,false));
  dp[0][0]=true;
  rep(i,n)rep(j,x+1){
    if(dp[i][j]&&j+a[i]<=x) dp[i+1][j+a[i]]=true;
    if(dp[i][j]&&j+b[i]<=x) dp[i+1][j+b[i]]=true;
  }
  if(dp[n][x]) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}