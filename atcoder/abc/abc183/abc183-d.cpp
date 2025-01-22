#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    ll n, w;
    cin >> n >> w;
    vector<ll> imos(200001);
    for(int i = 0; i < n; i++){
        ll s, t, p;
        cin >> s >> t >> p;
        imos[s] += p;
        imos[t] -= p;
    }

    bool ans = true;
    ll p_sum = 0;
    for(int i = 0; i < 200001; i++){
        p_sum += imos[i];
        if(p_sum > w) ans = false;
        // cerr << p_sum << "\n";
    }
    cout << (ans ? "Yes\n" : "No\n");
    return 0;
}