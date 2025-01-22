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
    int n, q, k;
    cin >> n;
    vector<vector<edge>> g(n);
    for(int i = 0; i < n - 1; i++){
        ll a, b, c;
        cin >> a >> b >> c;
        a--, b--;
        g[a].push_back({b, c});
        g[b].push_back({a, c});
    }
    cin >> q >> k;
    k--;
    vector<int> x(q), y(q);
    for(int i = 0; i < q; i++){
        cin >> x[i] >> y[i];
        x[i]--, y[i]--;
    }

    vector<ll> dist(n, INF);
    dist[k] = 0;
    vector<bool> done(n, false);

    // pq : (dist, to)
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.emplace(0, k);

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

    for(int i = 0; i < q; i++) cout << dist[x[i]] + dist[y[i]] << "\n";
	return 0;
}