#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    vector<int> sum(n + 1);
    for(int i = 0; i < n; i++) sum[i + 1] = sum[i] + a[i + 1];

    int ans = 0;
    for(int i = 0; i < n - k; i++){
        chmax(ans, sum[i + k] - sum[i]);
    }

    cout << ans << "\n";
    return 0;
}