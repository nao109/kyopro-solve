#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    ll a, b, k, l;
    cin >> a >> b >> k >> l;
    ll ans = 0;
    ans = (k / l) * b + min(b, (k % l) * a);
    cout << ans << endl;
    return 0;
}