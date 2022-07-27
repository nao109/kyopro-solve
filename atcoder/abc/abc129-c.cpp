#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const int mod = 1000000007;
int main(){
  int n,m;
  cin >> n >> m;
  set<int> step;
  for(int i=0; i<m; ++i){
    int a;
    cin >> a;
    step.insert(a);
  }
  vector<ll> dp(n+1,0);
  dp[0]=1,dp[1]=(step.count(1) ? 0 : 1);
  for(int i=2; i<n+1; ++i){
    if(!step.count(i)) dp[i]=(dp[i-1]+dp[i-2])%mod;
    else dp[i]=0;
  }
  cout << dp[n] << endl;
  return 0;
}