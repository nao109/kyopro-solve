#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
 
void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
 
    int s = 0;
    for(int i = 0; i < n; i++){
        if((int)g[i].size() == 1){
            s = g[i][0];
            break;
        }
    }
    int y = (int)(g[s].size() - 1);
 
    for(int i = 0; i < (int)g[s].size(); i++){
        if((int)g[g[s][i]].size() != 1){
            s = g[s][i];
            break;
        }
    }
    int x = (int)g[s].size();
 
    cout << x << " " << y << endl;
}
 
int main(){
    int q;
    cin >> q;
    while(q--) solve();
    return 0;
}