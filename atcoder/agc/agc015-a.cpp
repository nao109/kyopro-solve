#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    ll n, a, b;
    cin >> n >> a >> b;

    ll ans = 0;
    if(a > b) ans = 0;
    else if(n == 1 && a != b) ans = 0;
    else ans = (b - a) * (n - 2) + 1;
    cout << ans << endl;
    return 0;
}