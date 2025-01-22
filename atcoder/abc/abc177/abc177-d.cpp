#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    dsu d(n);
    for(int i = 0; i < m; ++i){
        int a, b;
        cin >> a >> b;
        d.merge(a - 1, b - 1);
    }

    int ans = 0;
    vector<vector<int>> f = d.groups();
    for(int i = 0; i < (int)f.size(); ++i){
        ans = max((int)f[i].size(), ans);
    }
    cout << ans << endl;
    return 0;
}