#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

#include <atcoder/all>
using namespace atcoder;

const int INF = 2e9;

using pii = pair<int, int>;
struct edge {
    int u;
    int v;
    int leng;
    bool operator<(const edge& o) const {
        return leng < o.leng;
    }
};

int dist2(pii x, pii y){
    return (x.fi - y.fi) * (x.fi - y.fi) + (x.se - y.se) * (x.se - y.se);
}

pair<vector<int>, vector<bool>> solve(int &n, int &m, int &k, vector<pii> &xy, vector<edge> &uvw, vector<pii> &ab){
    vector<int> p(n, 0);
    vector<bool> b(m, false);

    vector<int> max_leng_to_nearest_v(n, 0);
    for(int i = 0; i < k; i++){
        int min_dist2 = INF;
        int min_id = INF;
        for(int j = 0; j < n; j++){
            if(dist2(ab[i], xy[j]) < min_dist2){
                min_dist2 = dist2(ab[i], xy[j]);
                min_id = j;
            }
        }
        max_leng_to_nearest_v[min_id] = max(max_leng_to_nearest_v[min_id], min_dist2);
    }

    for(int i = 0; i < n; i++){
        p[i] = min(5000, (int)(sqrt(max_leng_to_nearest_v[i]) + 1));
    }

    dsu d(n);
    vector<pair<edge, int>> e(m);
    for(int i = 0; i < m; i++){
        e[i].fi = uvw[i];
        e[i].se = i;
    }
    sort(e.begin(), e.end());
    for(int i = 0; i < m; i++){
        if(!d.same(e[i].fi.u, e[i].fi.v)){
            b[e[i].se] = true;
            d.merge(e[i].fi.u, e[i].fi.v);
        }
    }

    return make_pair(p, b);
}

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<pii> xy(n);
    for(int i = 0; i < n; i++) cin >> xy[i].fi >> xy[i].se;
    vector<edge> uvw(m);
    for(int i = 0; i < m; i++){
        cin >> uvw[i].u >> uvw[i].v >> uvw[i].leng;
        uvw[i].u--, uvw[i].v--;
    }
    vector<pii> ab(k);
    for(int i = 0; i < k; i++) cin >> ab[i].fi >> ab[i].se;

    vector<int> p;
    vector<bool> b;
    tie(p, b) = solve(n, m, k, xy, uvw, ab);

    for(int i = 0; i < n; i++) cout << p[i] << " \n"[i == n - 1];
    for(int i = 0; i < m; i++) cout << (b[i] ? 1 : 0) << " \n"[i == m - 1];
    return 0;
}