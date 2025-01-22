#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> s[i];

    vector<vector<int>> g(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(s[i][j] == 'Y') g[i].push_back(j);
        }
    }

    vector<vector<int>> dist(n, vector<int>(n, -1));
    vector<vector<ll>> value(n, vector<ll>(n, -1));
    for(int i = 0; i < n; i++){
        queue<int> que;
        dist[i][i] = 0;
        value[i][i] = a[i];
        que.push(i);

        while(!que.empty()){
            int v = que.front();
            que.pop();
            for(int nv : g[v]){
                if(dist[i][nv] == -1){
                    dist[i][nv] = dist[i][v] + 1;
                    value[i][nv] = value[i][v] + a[nv];
                    que.push(nv);
                }
                else if(dist[i][nv] == dist[i][v] + 1){
                    value[i][nv] = max(value[i][nv], value[i][v] + a[nv]);
                }
            }
        }
    }
    
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int u, v;
        cin >> u >> v;
        if(dist[u - 1][v - 1] == -1) cout << "Impossible\n";
        else cout << dist[u - 1][v - 1] << " " << value[u - 1][v - 1] << endl;
    }
    return 0;
}