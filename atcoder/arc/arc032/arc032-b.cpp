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
        d.merge(a - 1, b - 1);
    }
    int ans = (int)d.groups().size() - 1;
    cout << ans << endl;
    return 0;
}