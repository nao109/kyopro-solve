#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
using pll = pair<ll, ll>;
int main(){
    ll n, m;
    cin >> n >> m;
    vector<vector<pair<ll, pll>>> g(n);
    for(int i = 0; i < m; i++){
        ll a, b, x, y;
        cin >> a >> b >> x >> y;
        a--, b--;
        g[a].push_back({b, {x, y}});
        g[b].push_back({a, {-x, -y}});
    }

    vector<bool> seen(n, false);
    vector<pll> coordinate(n);
    queue<ll> que;
    seen[0] = true;
    coordinate[0] = {0, 0};
    que.push(0);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(auto [nv, xy] : g[v]){
            if(!seen[nv]){
                coordinate[nv] = {coordinate[v].fi + xy.fi, coordinate[v].se + xy.se};
                seen[nv] = true;
                que.push(nv);
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(!seen[i]) cout << "undecidable\n";
        else cout << coordinate[i].fi << " " << coordinate[i].se << "\n";
    }
    return 0;
}