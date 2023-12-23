#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }

int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(k);
    for(ll i = 0; i < k; i++) cin >> a[i];
    sort(a.begin(), a.end());

    ll ans = 0;
    if(k % 2 == 0){
        for(ll i = 0; i < k; i += 2){
            ans += abs(a[i + 1] - a[i]);
        }
    }
    else{
        for(ll i = 1; i < k; i++){
            ans += a[i] * (i % 2 == 0 ? 1 : -1);
        }
        vector<ll> d(k);
        for(ll i = 1; i < k; i++){
            d[i] = d[i - 1] + abs(a[i] - a[i - 1]) * (i % 2 == 1 ? 1 : -1);
        }
        sort(d.begin(), d.end());
        ans += d[0];
    }
    cout << ans << endl;
    return 0;
}