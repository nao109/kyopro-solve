#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    ll n, k;
    cin >> n >> k;
    set<ll> a;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        a.insert(x);
    }

    ll ans = k * (k + 1) / 2;
    for(ll i : a){
        if(i <= k) ans -= i;
    }
    cout << ans << "\n";
    return 0;
}
