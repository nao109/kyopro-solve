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
    int h, w;
    cin >> h >> w;
    vector c(10, vector<int>(10));
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> c[i][j];
        }
    }
    vector a(h, vector<int>(w));
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> a[i][j];
        }
    }

    vector<vector<edge>> g(10);
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            g[i].push_back({j, c[j][i]});
            g[j].push_back({i, c[i][j]});
        }
    }

    vector<ll> dist(10, INF);
    dist[1] = 0;
    vector<bool> done(10, false);

    // pq : (dist, to)
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.emplace(0, 1);

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

    int ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(a[i][j] != -1) ans += dist[a[i][j]];
        }
    }
    cout << ans << endl;
	return 0;
}