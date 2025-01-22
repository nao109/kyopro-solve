#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<ll> t(n);
    for(int i = 0; i < n; i++) cin >> t[i];

    ll ans = 1;
    for(int i = 0; i < n; i++){
        ans = ans / gcd(ans, t[i]) * t[i];
    }

    cout << ans << endl;
    return 0;
}