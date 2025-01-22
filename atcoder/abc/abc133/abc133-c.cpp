#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    ll l, r;
    cin >> l >> r;
    ll ans = 2018;
    if(r - l >= 2019) ans = 0;
    else{
        for(ll i = l; i <= r; i++){
            for(ll j = i + 1; j <= r; j++){
                ans = min(ans, (i * j) % 2019);
            }
        }
    }
    cout << ans << endl;
    return 0;
}