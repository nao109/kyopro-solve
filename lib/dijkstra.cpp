#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

const ll INF = 1e18;
struct edge {
    ll to;
    ll leng;
};

ll dijkstra(vector<vector<edge>> &g, ll a, ll b){
    ll n = g.size();
    // 0-indexed の最短距離を表す配列 dist
    vector<ll> dist(n, INF);
    dist[a] = 0;
    vector<bool> done(n, false);

    // pq : (dist, to)
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.emplace(0, a);

    while(pq.size() > 0){
        auto [d, v] = pq.top();
        pq.pop();
        if(done[v]) continue;

        for(auto e : g[v]){
            if(dist[e.to] > dist[v] + e.leng){
                dist[e.to] = dist[v] + e.leng;
                pq.emplace(dist[e.to], e.to);
            }
        }
        done[v] = true;
    }
    return (dist[b] < INF ? dist[b] : -1);
}

int main(){
    ll n, m;
    cin >> n >> m;
    vector<vector<edge>> g(n);
    for(int i = 0; i < m; i++){
        ll a, b, w;
        cin >> a >> b >> w;
        a--, b--;
        g[a].push_back({b, w});
        g[b].push_back({a, w});
    }

    cout << dijkstra(g, x - 1, y - 1) << endl;
	return 0;
}
