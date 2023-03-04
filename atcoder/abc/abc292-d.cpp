#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    dsu d(n);
    vector<pair<int, int>> e(m);
    map<int, int> e_num;
    for(int i = 0; i < m; ++i){
        cin >> e[i].fi >> e[i].se;
        e[i].fi--, e[i].se--;
        d.merge(e[i].fi, e[i].se);
        e_num[d.leader(e[i].fi)]++;
        e_num[d.leader(e[i].se)]++;
    }

    bool flag = true;
    vector<vector<int>> v = d.groups();
    int v = (int)v.size();
    for(int i = 0; i < vs; ++i){
        e_num[v[i][0]] /= 2;
        if(e_num[v[i][0]] != (int)v[i].size()) flag = false;
    }

    cout << (flag ? "Yes\n" : "No\n");
    return 0;
}