#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const ll mod = 1000000007;
int main(){
    ll n;
    cin >> n;
    vector<ll> a(n), s(n + 1);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        s[i + 1] = s[i] + a[i];
    }

    ll ans = 0;
    for(int i = 0; i < n; ++i){
        ans = (ans + a[i] * ((s[n] - s[i + 1]) % mod)) % mod;
    }
    cout << ans << endl;
    return 0;
}