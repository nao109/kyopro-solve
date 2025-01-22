#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const ll INF = 1e18;

struct edge {
    ll to;
    ll leng;
    ll k;
};

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    x--, y--;
    vector<vector<edge>> g(n);
    for(int i = 0; i < m; i++){
        ll a, b, t, k;
        cin >> a >> b >> t >> k;
        a--, b--;
        g[a].push_back({b, t, k});
        g[b].push_back({a, t, k});
    }

    vector<ll> dist(n, INF);
    dist[x] = 0;
    vector<bool> done(n, false);

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.emplace(0, x);

    while(pq.size() > 0){
        auto [d, v] = pq.top();
        pq.pop();
        if(done[v]) continue;

        for(auto e : g[v]){
            if(dist[e.to] > (dist[v] + e.k - 1) / e.k * e.k + e.leng){
                dist[e.to] = (dist[v] + e.k - 1) / e.k * e.k + e.leng;
                pq.emplace(dist[e.to], e.to);
            }
        }
        done[v] = true;
    }

    cout << (dist[y] < INF ? dist[y] : -1) << endl;
	return 0;
}