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
    int ans = 0;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--, b--;
        if(d.same(a, b)) ans++;
        d.merge(a, b);
    }
    cout << ans << endl;
    return 0;
}