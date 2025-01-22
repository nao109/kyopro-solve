#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#include <atcoder/all>
using namespace atcoder;
using mint = modint1000000007;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0; i < h; i++) cin >> s[i];

    vector dp(h, vector<mint>(w, 0));
    dp[0][0] = 1;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(s[i][j] == '#') continue;
            if(i > 0) dp[i][j] += dp[i - 1][j];
            if(j > 0) dp[i][j] += dp[i][j - 1];
        }
    }
    cout << dp[h - 1][w - 1].val() << "\n";
    return 0;
}