#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define fi first
#define se second

#include "atcoder/all"
using namespace atcoder;
using mint = modint998244353;

int main(){
    ll n;
    cin >> n;

    ll nn = n, k9 = 9, k10 = 1;
    mint ans = 0;
    ans += mint(n) * mint(n + 1) / 2 + mint(n);
    while(nn >= 10){
        ans -= mint(k9) * mint(k10);
        k9 *= 10, k10 *= 10;
        nn /= 10;
    }
    ans -= mint(n - k10 + 1) * mint(k10);

    cout << ans.val() << "\n";
    return 0;
}
