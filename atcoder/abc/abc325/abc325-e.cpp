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
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    vector d(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> d[i][j];
        }
    }

    vector<vector<edge>> g(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            g[i].push_back({j, d[i][j]});
            g[j].push_back({i, d[i][j]});
        }
    }

    vector<ll> dist(n, INF);
    dist[0] = 0;
    vector<bool> done(n, false);

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.emplace(0, 0);

    while(pq.size() > 0){
        auto [d, v] = pq.top();
        pq.pop();
        if(done[v]) continue;

        for(auto e : g[v]){
            if(dist[e.to] > dist[v] + (e.leng * a)){
                dist[e.to] = dist[v] + (e.leng * a);
                pq.emplace(dist[e.to], e.to);
            }
        }
        done[v] = true;
    }

    vector<ll> dist2(n, INF);
    dist2[n - 1] = 0;
    vector<bool> done2(n, false);

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq2;
    pq2.emplace(0, n - 1);

    while(pq2.size() > 0){
        auto [d, v] = pq2.top();
        pq2.pop();
        if(done2[v]) continue;

        for(auto e : g[v]){
            if(dist2[e.to] > dist2[v] + (e.leng * b + c)){
                dist2[e.to] = dist2[v] + (e.leng * b + c);
                pq2.emplace(dist2[e.to], e.to);
            }
        }
        done2[v] = true;
    }

    ll min_dist = INF;
    for(int i = 0; i < n; i++){
        min_dist = min(dist[i] + dist2[i], min_dist);
    }
    cout << min_dist << endl;
	return 0;
}