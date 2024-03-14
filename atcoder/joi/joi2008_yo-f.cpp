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
    ll n, k;
    cin >> n >> k;
    vector<vector<edge>> g(n);
    for(int i = 0; i < k; i++){
        ll q;
        cin >> q;
        if(q == 0){
            ll a, b;
            cin >> a >> b;
            cout << dijkstra(g, a - 1, b - 1) << "\n";
        }
        if(q == 1){
            ll c, d, e;
            cin >> c >> d >> e;
            c--, d--;
            g[c].push_back({d, e});
            g[d].push_back({c, e});
        }
    }
	return 0;
}