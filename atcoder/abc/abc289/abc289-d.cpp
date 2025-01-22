#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m, x;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; ++i) cin >> b[i];
    cin >> x;

    vector<bool> mochi(x + 1, true);
    for(int i = 0; i < m; ++i) mochi[b[i]] = false;

    vector<bool> dp(x + 1, false);
    dp[0] = true;
    
    for(int i = 0; i <= x; ++i){
        for(int j = 0; j < n; ++j){
            if(dp[i] && mochi[i + a[j]]) dp[i + a[j]] = true;
        }
    }
    cout << (dp[x] ? "Yes\n" : "No\n");
    return 0;
}