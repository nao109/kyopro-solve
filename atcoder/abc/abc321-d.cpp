#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    ll n, m, p;
    cin >> n >> m >> p;
    vector<ll> a(n + 1), b(m + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= m; i++) cin >> b[i];
    sort(b.begin(), b.end());

    vector<ll> s(m + 1);
    s[0] = b[0];
    for(int i = 1; i <= m; i++) s[i] = s[i - 1] + b[i];

    ll ans = 0;
    for(int i = 1; i <= n; i++){
        int ok = 0, ng = m + 1;
        while(abs(ok - ng) > 1){
            int mid = (ok + ng) / 2;
            if(a[i] + b[mid] <= p) ok = mid;
            else ng = mid;
        }
        // ok : a[i] + b[j] <= p を満たす max_j
        ans += (m - ok) * p + (ok * a[i] + s[ok]);
    }

    cout << ans << endl;
    return 0;
}