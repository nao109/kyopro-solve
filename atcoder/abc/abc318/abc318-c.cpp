#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const ll INF = 1e18;
int main(){
    ll n, d, p;
    cin >> n >> d >> p;
    vector<ll> f(n);
    for(int i = 0; i < n; i++) cin >> f[i];
    sort(f.begin(),f.end(), greater<int>());

    ll ans = 0;

    ll sum_f = 0;
    for(int i = 0; i < n / d; i++){
        sum_f = 0;
        for(int j = 0; j < d; j++) sum_f += f[d * i + j];
        ans += min(sum_f, p);
    }

    sum_f = 0;
    for(int i = (n / d) * d; i < n; i++) sum_f += f[i];

    ans += min(sum_f, p);

    cout << ans << endl;
    return 0;
}