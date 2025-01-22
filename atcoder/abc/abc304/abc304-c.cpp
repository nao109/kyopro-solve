#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

void dfs(vector<pair<int, int>> &xy, vector<bool> &virus, vector<bool> &seen, int &d, int v){
    seen[v] = true;
    for(int nv = 0; nv < (int)xy.size(); nv++){
        if(seen[nv] || virus[nv]) continue;
        if((xy[nv].fi - xy[v].fi) * (xy[nv].fi - xy[v].fi) + (xy[nv].se - xy[v].se) * (xy[nv].se - xy[v].se) <= d * d){
            virus[nv] = true;
            dfs(xy, virus, seen, d, nv);
        }
    }
}

int main(){
    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> xy(n);
    for(int i = 0; i < n; i++) cin >> xy[i].fi >> xy[i].se;

    vector<bool> virus(n, false);
    virus[0] = true;

    vector<bool> seen(n, false);
    dfs(xy, virus, seen, d, 0);

    for(int i = 0; i < n; i++){
        cout << (virus[i] ? "Yes\n" : "No\n");
    }
    return 0;
}