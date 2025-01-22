#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const ll INF = 1e18;
int main(){
    ll x, y, z;
    string s;
    cin >> x >> y >> z >> s;
    int n = (int)s.size();

    vector<vector<ll>> dp(n + 1, vector<ll>(2, INF)); // 0: !caps, 1: caps
    dp[0][0] = 0;
    
    for(int i = 1; i <= n; i++){
        if(s[i - 1] == 'a'){
            dp[i][0] = min(dp[i - 1][0] + x, dp[i - 1][1] + z + x);
            dp[i][1] = min(dp[i - 1][1] + y, dp[i - 1][0] + z + y);
        }
        else{
            dp[i][0] = min(dp[i - 1][0] + y, dp[i - 1][1] + z + y);
            dp[i][1] = min(dp[i - 1][1] + x, dp[i - 1][0] + z + x);
        }
    }

    cout << min(dp[n][0], dp[n][1]) << endl;
    return 0;
}