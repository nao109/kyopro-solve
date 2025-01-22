#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const ll INF = 1e18;
int main(){
    int n, m;
    cin >> n >> m;

    vector<map<int, ll>> g(n);

    for(int i = 0; i < m; i++){
        ll a, b, c;
        cin >> a >> b >> c;
        a--, b--;
        g[a][b] = c;
        g[b][a] = c;
    }

    ll ans = 0;

    vector<int> p(n);
    for(int i = 0; i < n; i++) p[i] = i;
    do{
        ll dist = 0;
        for(int i = 0; i < n - 1; i++){
            if(g[p[i]].count(p[i + 1])) dist += g[p[i]][p[i + 1]];
            else break;
        }
        ans = max(ans, dist);
    }while(next_permutation(p.begin(), p.end()));

    cout << ans << endl;
    return 0;
}