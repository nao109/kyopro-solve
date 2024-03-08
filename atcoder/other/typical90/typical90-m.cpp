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
    ll n, m;
    cin >> n >> m;
    vector<vector<edge>> g(n);
    for(ll i = 0; i < m; i++){
        ll a, b, w;
        cin >> a >> b >> w;
        a--, b--;
        g[a].push_back({b, w});
        g[b].push_back({a, w});
    }

    vector<ll> dist_1(n, INF), dist_n(n, INF);
    dist_1[0] = 0, dist_n[n - 1] = 0;
    vector<bool> done_1(n, false), done_n(n, false);

    // pq : (dist, to)
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq_1, pq_n;
    pq_1.emplace(0, 0), pq_n.emplace(0, n - 1);

    while(pq_1.size() > 0){
        auto [d, v] = pq_1.top();
        pq_1.pop();
        if(done_1[v]) continue;

        for(auto e : g[v]){
            if(dist_1[e.to] > dist_1[v] + e.leng){
                dist_1[e.to] = dist_1[v] + e.leng;
                pq_1.emplace(dist_1[e.to], e.to);
            }
        }
        done_1[v] = true;
    }
    while(pq_n.size() > 0){
        auto [d, v] = pq_n.top();
        pq_n.pop();
        if(done_n[v]) continue;

        for(auto e : g[v]){
            if(dist_n[e.to] > dist_n[v] + e.leng){
                dist_n[e.to] = dist_n[v] + e.leng;
                pq_n.emplace(dist_n[e.to], e.to);
            }
        }
        done_n[v] = true;
    }


    for(int i = 0; i < n; i++){
        cout << dist_1[i] + dist_n[i] << endl;
    }
	return 0;
}