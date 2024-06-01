#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;

int main(){
    ll n, m;
    cin >> n >> m;

    bitset<61> bt(m);
    mint ans = 0;
    for(ll i = 0; i < 61; i++){
        if(bt[i]){
            ans += ((n + 1) >> (i + 1)) * (1ll << i);
            ans += max(((n + 1) % (1ll << (i + 1))) - (1ll << i), 0ll);
        }
    }
    cout << ans.val() << "\n";
    return 0;
}
