#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<string> c(n), d(m);
    int p0;
    vector<int> p(m);
    for(int i = 0; i < n; i++) cin >> c[i];
    for(int i = 0; i < m; i++) cin >> d[i];
    cin >> p0;
    for(int i = 0; i < m; i++) cin >> p[i];

    map<string, int> dp;
    for(int i = 0; i < m; i++) dp[d[i]] = p[i];

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(!dp.count(c[i])) ans += p0;
        else ans += dp[c[i]];
    }
    cout << ans << endl;
    return 0;
}