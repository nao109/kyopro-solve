#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using mint = modint1000000007;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<int> dist(n, -1);
    vector<mint> cnt(n, 0);
    queue<int> que;
    dist[0] = 0;
    cnt[0] = 1;
    que.push(0);

    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(int nv : g[v]){
            if(dist[nv] == -1){
                dist[nv] = dist[v] + 1;
                cnt[nv] = cnt[v];
                que.push(nv);
            }
            else if(dist[nv] == dist[v] + 1){
                cnt[nv] += cnt[v];
            }
        }
    }

    if(dist[n - 1] == -1) cout << 0 << endl;
    else cout << cnt[n - 1].val() << endl;
    return 0;
}