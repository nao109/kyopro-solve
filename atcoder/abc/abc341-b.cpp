#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n - 1; i++){
        ll s, t;
        cin >> s >> t;
        a[i + 1] += (a[i] / s) * t;
        a[i] %= s;
    }
    cout << a[n - 1] << "\n";
    return 0;
}