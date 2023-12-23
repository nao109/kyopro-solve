#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }

int main(){
    ll a, m, l, r;
    cin >> a >> m >> l >> r;
    a %= m;
    l -= a, r -= a;
    l += (2000000000000000000 / m) * m, r += (2000000000000000000 / m) * m;
    cout << l << " " << r << endl;

    if(l == r) cout << (r % m == 0) << endl;
    else cout << r / m - (l + m - 1) / m + 1 << endl;
    return 0;
}