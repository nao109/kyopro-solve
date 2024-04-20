#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

#include <atcoder/all>
using namespace atcoder;

int main(){
    int n, m;
    cin >> n >> m;
    dsu d(n);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--, b--;
        d.merge(a, b);
    }

    vector<vector<int>> dg = d.groups();

    vector<ll> v_num;
    for(int i = 0; i < (int)dg.size(); i++){
        v_num.push_back((int)dg[i].size());
    }

    ll e_sum = 0;
    for(int i = 0; i < (int)v_num.size(); i++){
        e_sum += v_num[i] * (v_num[i] - 1) / 2;
    }

    ll ans = e_sum - m;
    cout << ans << "\n";
    return 0;
}
