#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    ll a, b, c;
    cin >> a >> b >> c;
    ll g = gcd(gcd(a, b), c);
    ll ans = (a + b + c - 3 * g) / g;
    cout << ans << endl;
    return 0;
}     
