#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    ll n, m;
    cin >> n >> m;
    ll ans = LLONG_MAX;
    for(ll i = 1; i <= n; ++i){
        if((m + i - 1) / i <= n) ans = min(ans, ((m + i - 1) / i) * i);
        if((m + i - 1) / i < i) break;
    }
    cout << (ans == LLONG_MAX ?  -1 : ans) << endl;
    return 0;
}