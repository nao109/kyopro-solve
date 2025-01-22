#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
using P = pair<ll, ll>;
int main(){
    ll l, n1, n2;
    cin >> l >> n1 >> n2;
    multimap<int, P> vl1;
    map<int, vector<P>> vl2;
    ll v = -1, lf = 1, le = 1;
    for(int i = 0; i < n1; ++i){
        cin >> v >> le;
        vl1.emplace(v, make_pair(lf, lf + le - 1));
        lf += le;
    }
    lf = 1;
    for(int i = 0; i < n2; ++i){
        cin >> v >> le;
        vl2[v].push_back(make_pair(lf, lf + le - 1));
        lf += le;
    }

    ll ans = 0;
    for(auto [v, l] : vl1){
        if(vl2.count(v) == 0) continue;
        for(auto [lf, le] : vl2[v]){
            if(le < l.fi) continue;
            if(l.se < lf) break;
            ans += max(0ll, (min(le, l.se) - max(lf, l.fi) + 1));
        }
    }

    cout << ans << endl;
    return 0;
}