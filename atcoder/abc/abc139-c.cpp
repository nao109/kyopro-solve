#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> h(n);
  for(int &i:h) cin >> i;
  vector<int> dp(n,0);
  for(int i=1; i<n; ++i){
    if(h[i-1]>=h[i]) dp[i]=dp[i-1]+1;
  }
  sort(all(dp));
  cout << dp[n-1] << endl;
  return 0;
}