#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    vector<pair<ll, ll>> ab(n);
    for(int i = 0; i < n; i++){
        cin >> ab[i].fi >> ab[i].se;
        ab[i].fi = ab[i].se - ab[i].fi;
    }

    sort(ab.begin(), ab.end());

    ll ans = 0;
    for(int i = 0; i < n - 1; i++){
        ans += ab[i].se - ab[i].fi;
    }
    ans += ab.back().se;
    cout << ans << "\n";
    return 0;
}
