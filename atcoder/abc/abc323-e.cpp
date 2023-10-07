#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
#define fi first
#define se second
int main(){
    int n, x;
    cin >> n >> x;
    vector<int> t(n);
    for(int i = 0; i < n; i++) cin >> t[i];

    mint r = ((mint)1) / ((mint)n);

    // p[i] : i秒後に曲が始まる確率
    vector<mint> p(x + 1);
    p[0] = 1;
    for(int i = 1; i <= x; i++){
        for(int j = 0; j < n; j++){
            if(i - t[j] >= 0) p[i] += p[i - t[j]];
        }
        p[i] *= r;
    }

    mint ans = 0;
    for(int i = max(0, x + 1 - t[0]); i <= x; i++) ans += p[i];
    ans /= n;
    cout << ans.val() << endl;
    return 0;
}
