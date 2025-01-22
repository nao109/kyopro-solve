#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
const ll INF = 1e18;
struct edge {
    ll to;
    ll leng;
};

int main(){
    int N, M, R;
    cin >> N >> M >> R;
    vector<int> r(R);
    for(int i = 0; i < R; i++){
        cin >> r[i];
        r[i]--;
    }
    sort(r.begin(), r.end());
    vector<vector<edge>> g(N);
    for(int i = 0; i < M; i++){
        ll a, b, c;
        cin >> a >> b >> c;
        a--, b--;
        g[a].push_back({b, c});
        g[b].push_back({a, c});
    }

    vector dist(N, vector<ll>(N, INF));
    for(int i = 0; i < N; i++){
        dist[i][i] = 0;
        vector<bool> done(N, false);

        // pq : (dist, to)
        priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
        pq.emplace(0, i);

        while(pq.size() > 0){
            auto [d, v] = pq.top();
            pq.pop();
            if(done[v]) continue;

            for(auto e : g[v]){
                if(dist[i][e.to] > dist[i][v] + e.leng){
                    dist[i][e.to] = dist[i][v] + e.leng;
                    pq.emplace(dist[i][e.to], e.to);
                }
            }
            done[v] = true;
        }
    }

    ll ans = INF;
    do{
        ll d = 0;
        for(int i = 1; i < R; i++) d += dist[r[i - 1]][r[i]];
        chmin(ans, d);
    }while(next_permutation(r.begin(), r.end()));
    cout << ans << endl;
	return 0;
}