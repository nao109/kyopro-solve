#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

void dfs(vector<vector<int>> &g, vector<bool> &seen, vector<int> &ans, set<int> &check, int v){
    seen[v] = true;
    for(int nv : g[v]){
        if(!seen[nv]){
            dfs(g, seen, ans, check, nv);
        }
    }
    if(!check.count(v)){
        ans.push_back(v + 1);
        check.insert(v);
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for(int i = 0; i < m; ++i) cin >> a[i];

    vector<vector<int>> g(n);
    for(int i = 0; i < m; ++i){
        g[a[i] - 1].push_back(a[i]);
        g[a[i]].push_back(a[i] - 1);
    }

    for(int i = 0; i < n; ++i){
        sort(g[i].begin(), g[i].end(), greater<int>());
    }

    vector<bool> seen(n, false);
    vector<int> ans;
    set<int> check;
    for(int i = 0; i < n; ++i){
        dfs(g, seen, ans, check, i);
    }

    for(int i = 0; i < n; ++i){
        cout << ans[i] << (i < n - 1 ? " " : "\n");
    }
    return 0;
}