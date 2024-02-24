#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#include <atcoder/all>
using namespace atcoder;
using mint = modint1000000007;

int main(){
    string s;
    cin >> s;
    int n = s.size();

    // dp[i][j] : Sのi番目の文字まで見たときにchokudaiのj文字目まで見れる通り数
    vector dp(n + 1, vector<mint>(9));
    for(int i = 0; i < n; i++) dp[i][0] = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 8; j++){
            dp[i + 1][j + 1] += dp[i][j + 1];
            if(s[i] == "chokudai"[j]){
                dp[i + 1][j + 1] += dp[i][j];
            }
        }
    }

    cout << dp[n][8].val() << "\n";
    return 0;
}