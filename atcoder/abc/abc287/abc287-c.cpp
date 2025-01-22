#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

void dfs(vector<set<int>> &g, vector<bool> &seen, int v){
    seen[v] = true;
    for(int w : g[v]){
        if(!seen[w]) dfs(g, seen, w);
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<set<int>> g(n, set<int>());
    for(int i = 0; i < m; ++i){
        int u, v;
        cin >> u >> v;
        u--, v--;
        g[u].insert(v);
        g[v].insert(u);
    }

    int dev = 0;
    for(int v = 0; v < n; ++v) dev += g[v].size();
    if(dev / 2 != n - 1){
        cout << "No\n";
        return 0;
    }

    int s = -1;
    bool ans = true;

    for(int v = 0; v < n; ++v){
        if(g[v].size() == 0){
            cout << "No\n";
            return 0;
        }
        else if(g[v].size() > 2) ans = false;
        else s = v;
    }

    vector<bool> seen(n, false);
    dfs(g, seen, s);

    for(int v = 0; v < n; ++v) ans &= seen[v];
    cout << (ans ? "Yes\n" : "No\n");
    return 0;
}