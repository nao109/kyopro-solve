#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int W, N, K;
    cin >> W >> N >> K;
    vector<int> a(N + 1), b(N + 1);
    for(int i = 1; i <= N; i++) cin >> a[i] >> b[i];

    // dp[i][j][k]
    // i枚目までの画像の中から幅がj以下、枚数がk枚以下になるよう選んだときの重要度の総和の最大値
    vector dp(N + 1, vector(W + 1, vector<int>(K + 1, 0)));
    for(int i = 1; i <= N; i++){
        for(int k = 0; k <= K; k++){
            for(int j = 0; j <= W; j++){
                // 使うとき
                if(j - a[i] >= 0 && k >= 1) dp[i][j][k] = max(dp[i - 1][j - a[i]][k - 1] + b[i], dp[i - 1][j][k]);
                // 使わないとき
                else dp[i][j][k] = dp[i - 1][j][k];
            }
        }
    }
    cout << dp[N][W][K] << "\n";
    return 0;
}