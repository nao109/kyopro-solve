#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;

ll f(ll x, ll y){
    return stoll(to_string(x) + to_string(y));
}

int main(){
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    vector<ll> s(n + 1, 0);
    for(int i = 1; i <= n; i++) s[i] = s[i - 1] + a[i];

    mint ans = 0;
    for(int j = 2; j <= n; j++){
        ans += mint((j - 1)) * mint(a[j]);
        ans += mint(s[j - 1]) * mint(10).pow((int)to_string(a[j]).length());
    }
    cout << ans.val() << "\n";
    return 0;
}
