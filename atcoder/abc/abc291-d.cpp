#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const ll mod = 998244353;
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> ab(n);
    for (int i = 0; i < n; i++){
        cin >> ab[i].fi >> ab[i].se;
    }

    vector<vector<ll>> dp(n, vector<ll>(2, 0));
    dp[0][0] = 1, dp[0][1] = 1;

    for(int i = 1; i < n; ++i){
        if(ab[i].fi != ab[i - 1].fi){
            dp[i][0] = (dp[i][0] + dp[i - 1][0]) % mod;
        }
        if(ab[i].fi != ab[i - 1].se){
            dp[i][0] = (dp[i][0] + dp[i - 1][1]) % mod;
        }
        if(ab[i].se != ab[i - 1].fi){
            dp[i][1] = (dp[i][1] + dp[i - 1][0]) % mod;
        }
        if(ab[i].se != ab[i - 1].se){
            dp[i][1] = (dp[i][1] + dp[i - 1][1]) % mod;
        }
    }
    ll ans = (dp[n - 1][0] + dp[n - 1][1]) % mod;
    cout << ans << endl;
    return 0;
}