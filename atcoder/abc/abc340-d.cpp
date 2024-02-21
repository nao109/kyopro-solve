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
        ll a, b, x;
        cin >> a >> b >> x;
        x--;
        g[i].push_back({i + 1, a});
        g[i].push_back({x, b});
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

    cout << dist[n - 1] << endl;
	return 0;
}