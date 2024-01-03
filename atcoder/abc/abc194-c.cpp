#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    vector<ll> sum(n), sum2(n);
    sum[0] = a[0], sum2[0] = a[0] * a[0];
    for(int i = 1; i < n; i++){
        sum[i] = sum[i - 1] + a[i];
        sum2[i] += sum2[i - 1] + a[i] * a[i];
    }

    ll ans = 0;
    for(int i = 1; i < n; i++){
        ans += i * a[i] * a[i] - 2 * a[i] * sum[i - 1] + sum2[i - 1];
    }
    cout << ans << endl;
    return 0;
}