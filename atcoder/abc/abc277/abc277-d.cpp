#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }

const ll INF = 1e18;
#include <atcoder/all>
using namespace atcoder;

int main(){
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    ll sum = 0;
    for(ll i : a) sum += i;

    dsu d(n);
    for(int i = 0; i < n; i++){
        if(a[(i + 1) % n] == (a[i] + 1) % m || a[(i + 1) % n] == a[i]){
            d.merge(i, (i + 1) % n);
        }
    }

    vector<vector<int>> g = d.groups();
    ll ans = INF;
    for(auto i : g){
        ll gsum = 0;
        for(int j : i) gsum += a[j];
        chmin(ans, sum - gsum);
    }
    cout << ans << "\n";
    return 0;
}