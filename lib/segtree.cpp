#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

ll f(ll a, ll b){ return f(a, b); }
ll e(){ return e(); }
struct SegmentTree {
private:
    ll sz;
    vector<ll> node;

public:
    // 0-indexed の元配列 v を 1-indexed のセグメント木で表現する
    SegmentTree(vector<ll> v){
        // 最下段のノード数は元配列のサイズ以上になる最小の2冪を size とすると
        // セグメント木全体で必要なノード数は 2*size-1 個である
        ll n = v.size();
        sz = 1;
        while(sz < n) sz *= 2;
        node.resize(sz * 2, e());

        // 最下段に値を入れたあとで、下の段から順番に値を入れる
        for(ll i = 0; i < n; i++) node[i + sz] = v[i];

        // 値を入れるには、自分の子の2値を参照すればいい
        for(ll i = sz - 1; i >= 1; i--) node[i] = f(node[2 * i], node[2 * i + 1]);
    }

    void update(ll x, ll val){
        // 最下段のノードにアクセスする
        x += sz;
        node[x] = val;
        // 最下段のノードを更新したら、あとは親に上っていく
        while(x > 0){
            x /= 2;
            node[x] = f(node[2 * x], node[2 * x + 1]);
        }
    }

    ll query(ll l, ll r){
        // 最下段のノードにアクセスする
        l += sz;
        r += sz;
        // l < r を満たす限り親に上っていく
        ll res = e();
        while(l < r){
            // もし左端が親に上れないなら右にずらす
            if(l % 2 == 1){
                res = f(res, node[l]);
                l++;
            }
            // 左端が親に上る
            l /= 2;
            // もし右端が親に上れないなら左にずらす
            if(r % 2 == 1){
                res = f(res, node[r - 1]);
                r--;
            }
            // 右端が親に上る
            r /= 2;
        }
        return res;
    }
};

int main(){
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    SegmentTree seg(a);

    while(q--){
        ll t, x, y;
        cin >> t >> x >> y;
        if(t == 1){
            x--;
            seg.update(x, y);
        }
        else{
            x--, y--;
            cout << seg.query(x, y + 1) << "\n";
        }
    }
    return 0;
}