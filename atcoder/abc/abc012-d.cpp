#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

const int INF = 1e9;

struct edge {
    int to;
    int leng;
};

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<edge>> g(n);
    for(int i = 0; i < m; i++){
        int a, b, t;
        cin >> a >> b >> t;
        a--, b--;
        g[a].push_back({b, t});
        g[b].push_back({a, t});
    }

    vector<int> max_dist(n);
    for(int i = 0; i < n; i++){
        vector<int> dist(n, INF);
        dist[i] = 0;
        vector<bool> done(n, false);

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.emplace(0, i);

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

        for(int j = 0; j < n; j++){
            max_dist[i] = max(max_dist[i], dist[j]);
        }
    }

    int min_dist = INF;
    for(int i = 0; i < n; i++) min_dist = min(min_dist, max_dist[i]);
    cout << min_dist << endl;
    return 0;
}