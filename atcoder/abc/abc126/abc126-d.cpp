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

int main(){
    int n;
    cin >> n;
    vector<vector<edge>> g(n);
    for(int i = 0; i < n - 1; i++){
        ll u, v, w;
        cin >> u >> v >> w;
        u--, v--;
        g[u].push_back({v, w % 2});
        g[v].push_back({u, w % 2});
    }

    vector<ll> dist(n, INF);
    dist[0] = 0;
    vector<bool> done(n, false);

    // pq : (dist, to)
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.emplace(0, 0);

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

    vector<int> color(n, 0);
    for(int i = 0; i < n; i++){
        if(dist[i] % 2 == 1) color[i] = 1;
    }
    for(int i = 0; i < n; i++) cout << color[i] << "\n";
	return 0;
}