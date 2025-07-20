#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

// index が条件を満たすかどうか
bool isOK(vector<ll> &a, ll m, ll key) {
    ll sum = 0;
    for(ll i = 0; i < (ll)a.size(); i++){
        sum += min(key, a[i]);
    }
    return (sum <= m);
}

int main(){
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll sum = 0;
    for(ll i = 0; i < n; i++) sum += a[i];
    if(sum <= m){
        cout << "infinite\n";
        return 0;
    }

    ll ok = 0, ng = m + 1;
    while(abs(ok - ng) > 1){
        ll mid = (ok + ng) / 2;
        if(isOK(a, m, mid)) ok = mid;
        else ng = mid;
    }

    cout << ok << "\n";
    return 0;
}
