#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

void dfs(vector<set<int>> &g, vector<bool> &seen, int v){
    seen[v] = true;
    for(int nv : g[v]){
        if(!seen[nv]){
            dfs(g, seen, nv);
        }
    }
}

int main(){
    int n, q;
    cin >> n >> q;
    vector<set<int>> g(n);
    for(int i = 0; i < q; ++i){
        int x, u, v;
        cin >> x >> u >> v;
        u--, v--;
        if(x == 1){
            if(g[u].count(v)) g[u].erase(v);
            else g[u].insert(v);
            if(g[v].count(u)) g[v].erase(u);
            else g[v].insert(u);
        }
        else{
            vector<bool> seen(n, false);
            dfs(g, seen, u);
            cout << (seen[v] ? "Yes\n" : "No\n");
        }
    }
    return 0;
}