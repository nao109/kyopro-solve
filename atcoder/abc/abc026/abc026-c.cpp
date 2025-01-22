#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int dfs(vector<vector<int>> &g, vector<bool> &seen, int v){
    seen[v] = true;
    int res = 1;
    int mi = (int)2e9, ma = 0;
    for(int nv : g[v]){
        if(!seen[nv]){
            int res_nv = dfs(g, seen, nv);
            mi = min(mi, res_nv);
            ma = max(ma, res_nv);
        }
    }
    if(mi != 2e9 || ma != 0) res += mi + ma;
    return res;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    for(int i = 1; i < n; i++){
        int b;
        cin >> b;
        g[b - 1].push_back(i);
    }

    vector<bool> seen(n, false);
    int ans = dfs(g, seen, 0);
    cout << ans << endl;
    return 0;
}