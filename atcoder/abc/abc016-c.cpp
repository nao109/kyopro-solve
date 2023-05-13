#include <bits/stdc++.h>
using namespace std;
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

    for(int i = 0; i < n; i++){
        vector<int> dist(n, -1);
        queue<int> que;
        dist[i] = 0;
        que.push(i);
        while(!que.empty()){
            int v = que.front();
            que.pop();
            for(int nv : g[v]){
                if(dist[nv] == -1){
                    dist[nv] = dist[v] + 1;
                    que.push(nv);
                }
            }
        }

        int ans = 0;
        for(int j = 0; j < n; j++){
            if(dist[j] == 2) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}