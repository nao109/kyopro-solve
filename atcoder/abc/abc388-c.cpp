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

    ll ans = 0;
    for(int i = 0; i < n; i++){
        auto itr = lower_bound(a.begin(), a.end(), a[i] * 2);
        ans += distance(itr, a.end());
    }

    cout << ans << "\n";
    return 0;
}
