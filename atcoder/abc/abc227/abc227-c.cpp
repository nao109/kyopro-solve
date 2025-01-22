#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i = 1; i * i * i <= n; i++){
        for(ll j = i; j * j <= (n + i - 1) / i; j++){
            if(i * j > n) break;
            ans += n / (i * j) - j + 1;
        }
    }
    cout << ans << endl;
    return 0;
}