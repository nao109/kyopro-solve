#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<ll> sum(n, 0), ma(n);
    sum[0] = a[0];
    ma[0] = max(0ll, a[0]);
    for(int i = 1; i < n; i++){
        sum[i] = sum[i - 1] + a[i];
        ma[i] = max(ma[i - 1], sum[i]);
    }

    ll ans = 0, now = 0;
    for(int i = 0; i < n; i++){
        ans = max(ans, now + ma[i]);
        now += sum[i];
    }
    cout << ans << endl;
    return 0;
}