#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const ll INF = 9e18;
int main(){
    int n;
    cin >> n;
    vector<pair<ll, ll>> xy(n);
    for(int i = 0; i < n; i++) cin >> xy[i].fi >> xy[i].se;

    vector<vector<ll>> dp(n + 1, vector<ll>(2));
    dp[0][0] = 0, dp[0][1] = -INF;
    for(int i = 1; i <= n; i++){
        dp[i][0] = dp[i - 1][0], dp[i][1] = dp[i - 1][1];
        if(xy[i - 1].fi == 0){
            dp[i][0] = max(dp[i][0], max(dp[i - 1][0], dp[i - 1][1]) + xy[i - 1].se);
        }
        else{
            dp[i][1] = max(dp[i][1], dp[i - 1][0] + xy[i - 1].se);
        }
    }

    cout << max(dp[n][0], dp[n][1]) << endl;
    return 0;
}