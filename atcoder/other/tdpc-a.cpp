#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i = 0; i < n; ++i) cin >> p[i];
    
    vector<vector<bool>> dp(n + 1, vector<bool>(10010, false));
    for(int i = 0; i <= n; ++i) dp[i][0] = true;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 10010; ++j){
            if(dp[i][j]){
                dp[i + 1][j] = true;
                if(j + p[i] < 10010) dp[i + 1][j + p[i]] = true;
            }
        }
    }
    
    int ans = 0;
    for(int i = 0; i <= 10000; ++i){
        if(dp[n][i]) ans++;
    }
    cout << ans << endl;
    return 0;
}