#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
#define fi first
#define se second
int main(){
    int n, x;
    cin >> n >> x;
    vector<int> t(n);
    for(int i = 0; i < n; i++) cin >> t[i];

    // dp[i][j] : j秒後に曲iが始まる確率
    vector dp(n, vector<mint>(x + 20010));
    for(int i = 0; i < n; i++){
        dp[i][0] = 1;
        dp[i][0] /= n;
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= x; j++){
            for(int k = 0; k < n; k++){
                mint s = dp[i][j - t[k]];
                s /= n;
                if(j - t[k] >= 0) dp[i][j] += s;
            }
        }
    }

    mint ans = 0;
    for(int j = max(0, x + 1 - t[0]); j <= x; j++){
        ans += dp[0][j];
    }
    cout << ans.val() << endl;
    return 0;
}