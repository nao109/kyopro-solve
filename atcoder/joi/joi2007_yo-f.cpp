#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int a, b, n;
    cin >> a >> b >> n;
    set<pair<int, int>> xy;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        xy.emplace(x, y);
    }

    vector<vector<int>> dp(a + 1, vector<int>(b + 1, 0));
    dp[1][1] = 1;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            if(xy.count({i, j})) dp[i][j] = 0;
            else{
                if(i > 1) dp[i][j] += dp[i - 1][j];
                if(j > 1) dp[i][j] += dp[i][j - 1];
            }
        }
    }

    cout << dp[a][b] << "\n";
    return 0;
}
