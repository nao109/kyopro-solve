#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    int n = s.size();

    vector dp(n + 1, vector<mint>(n + 1));
    dp[0][0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(s[i] == '(') dp[i + 1][j + 1] += dp[i][j];
            else if(s[i] == ')'){
                if(j > 0) dp[i + 1][j - 1] += dp[i][j];
            }
            else{
                dp[i + 1][j + 1] += dp[i][j];
                if(j > 0) dp[i + 1][j - 1] += dp[i][j];
            }
        }
    }
    cout << dp[n][0].val() << endl;
    return 0;
}