#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

const int INF = 1e9;

int main(){
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    int len = 0;
    vector<int> dp(n + 1), l(n + 1, INF);
    for(int i = 1; i <= n; i++){
        int pos = lower_bound(l.begin() + 1, l.begin() + len + 1, a[i]) - l.begin();
        dp[i] = pos;

        l[dp[i]] = a[i];
        if(dp[i] > len) len++;
    }

    cout << len << "\n";
    return 0;
}
