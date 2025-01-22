#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<tuple<ll, ll, ll, ll>> dabc(n);
    for(int i = 0; i < n; i++) cin >> get<1>(dabc[i]);
    for(int i = 0; i < n; i++) cin >> get<2>(dabc[i]);
    for(auto &[d, a, b, c] : dabc) d = a - b;
    sort(dabc.begin(), dabc.end());

    ll diff = 0;

    for(auto &[d, a, b, c] : dabc){
        if(d >= 0) c = a;
        else{
            c = b, d = 0;
            diff += b - a;
        }
    }
    sort(dabc.begin(), dabc.end(), greater<tuple<ll, ll, ll, ll>>());
    for(auto &[d, a, b, c] : dabc){
        ll x = min(diff, d);
        c -= x, d -= x, diff -= x;
    }
    
    int ans = 0;
    for(auto [d, a, b, c] : dabc){
        if(a != c) ans++;
    }
    cout << (diff == 0 ? ans : -1) << endl;
    return 0;
}