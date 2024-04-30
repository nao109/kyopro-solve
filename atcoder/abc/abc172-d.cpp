#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    ll n;
    cin >> n;

    // 主客転倒を使う
    // (a は n の約数である) <=> (n は a の倍数である)
    ll ans = 0;
    for(ll a = 1; a <= n; a++){
        for(ll b = 1; b <= n / a; b++){
            ans += a * b;
        }
    }
    cout << ans << "\n";
    return 0;
}
