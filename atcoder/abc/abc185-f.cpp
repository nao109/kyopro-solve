#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

#include <atcoder/all>
using namespace atcoder;
ll op(ll a, ll b){ return (a ^ b); }
ll e(){ return 0ll; }

int main(){
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    segtree<ll, op, e> seg(a);

    while(q--){
        ll t, x, y;
        cin >> t >> x >> y;
        if(t == 1){
            seg.set(x - 1, seg.get(x - 1) ^ y);
        }
        else{
            cout << seg.prod(x - 1, y) << "\n";
        }
    }
    return 0;
}