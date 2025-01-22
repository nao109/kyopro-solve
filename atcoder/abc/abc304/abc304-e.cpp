#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    dsu d(n);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u--, v--;
        d.merge(u, v);
    }

    int k;
    cin >> k;
    set<pair<int, int>> xy;
    for(int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;
        x--, y--;
        xy.insert(minmax(d.leader(x), d.leader(y)));
    }

    int Q;
    cin >> Q;
    while(Q--){
        int p, q;
        cin >> p >> q;
        p--, q--;
        bool flag = true;
        if(xy.count(minmax(d.leader(x), d.leader(y)))) flag = false;
        cout << (flag ? "Yes\n" : "No\n");
    }
    return 0;
}