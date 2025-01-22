#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define fi first
#define se second

template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }

const ll INF = 1e18;

int main(){
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n + 1);
    for(ll i = 1; i <= n; i++) cin >> a[i];

    vector<ll> sum(n + 1);
    for(ll i = 1; i <= n; i++) sum[i] = sum[i - 1] + a[i];

    ll ans = 0, max_sum = 0;
    for(ll i = 1; i <= m; i++) max_sum += i * a[n - m + i];
    ans = max_sum;

    for(ll i = n; i >= m + 1; i--){
        max_sum -= m * a[i];
        max_sum += sum[i - 1] - sum[i - 1 - m];
        chmax(ans, max_sum);
    }

    cout << ans << "\n";
    return 0;
}
