#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

pair<int, int> dfs(vector<vector<int>> &g, int s){
    int n = g.size();
    vector<int> dist(n, -1);
    queue<int> que;
    dist[s] = 0;
    que.push(s);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(int nv : g[v]){
            if(dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }

    int max_len = 0, id_max = 0;
    for(int i = 0; i < n; i++){
        if(dist[i] > max_len){
            max_len = dist[i];
            id_max = i;
        }
    }
    
    return make_pair(max_len, id_max);
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    for(int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int max_len = 0, id_max = 0;

    tie(max_len, id_max) = dfs(g, 0);
    tie(max_len, id_max) = dfs(g, id_max);

    cout << max_len + 1 << "\n";
    return 0;
}
