#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
 
void dfs(vector<vector<int>> &a, vector<vector<bool>> &seen, int &n, int &m, int i, int j, int &v){
    if(seen[i][j]) return;
 
    seen[i][j] = true;
    if(a[i][j] == 0) return;
    v += a[i][j];
    if(i > 0) dfs(a, seen, n, m, i - 1, j, v);
    if(j > 0) dfs(a, seen, n, m, i, j - 1, v);
    if(i < n - 1) dfs(a, seen, n, m, i + 1, j, v);
    if(j < m - 1) dfs(a, seen, n, m, i, j + 1, v);
}
 
void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
 
    int ma = 0;
    vector<vector<bool>> seen(n, vector<bool>(m, false));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; j++){
            int v = 0;
            dfs(a, seen, n, m, i, j, v);
            ma = max(v, ma);
        }
    }
    cout << ma << endl;
}
 
int main(){
    int q;
    cin >> q;
    while(q--) solve();
    return 0;
}