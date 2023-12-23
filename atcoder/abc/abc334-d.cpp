#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }

int main(){
    ll n, q;
    cin >> n >> q;
    vector<ll> r(n);
    for(ll i = 0; i < n; i++) cin >> r[i];
    sort(r.begin(), r.end());
    vector<ll> sum(n + 1);
    for(ll i = 0; i < n; i++) sum[i + 1] = sum[i] + r[i];

    while(q--){
        ll x;
        cin >> x;
        cout << distance(sum.begin(), upper_bound(sum.begin(), sum.end(), x)) - 1 << endl;
    }
    return 0;
}