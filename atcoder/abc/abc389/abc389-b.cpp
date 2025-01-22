#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    ll x;
    cin >> x;
    ll n = 1, ans = 1;
    while (n < x) {
        ans++;
        n *= ans;
    }
    cout << ans << "\n";
    return 0;
}
