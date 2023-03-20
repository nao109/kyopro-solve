#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
ll modpow(ll a, ll b, ll m){
    ll p = a, ans = 1;
    for(int i = 0; i < 30; ++i){
        if((b & (1 << i)) != 0) ans *= p, ans %= m;
        p *= p, p %= m;
    }
    return ans;
}
int main(){
    ll a, x, m;
    cin >> a >> x >> m;
    ll ans = (modpow(a, x, m) + m - 1) % m;
    ans *= modpow(a - 1, m - 2, m);
    ans %= m;
    cout << ans << endl;
    return 0;
}