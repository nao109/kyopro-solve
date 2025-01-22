#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

const ll mod = 100000000;
ll f(ll x, ll y){
    return (x + y) % mod;
}

int main(){
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    vector<ll> s(n + 1, 0);
    for(int i = 1; i <= n; i++) s[i] = s[i - 1] + a[i];

    ll ans = 0;
    for(int i = 1; i <= n - 1; i++){
        auto itr = lower_bound(a.begin() + (i + 1), a.end(), mod - a[i]);
        ll pos = distance(a.begin(), itr);
        pos--;
        ans += (pos - i) * a[i] + s[pos] - s[i];
        ans += (n - pos) * a[i] + s[n] - s[pos] - (n - pos) * mod;
    }
    cout << ans << "\n";
    return 0;
}
