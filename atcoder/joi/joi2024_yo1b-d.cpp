#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    ll x, n;
    cin >> x >> n;
    ll ans = 0;
    while(x < n){
        if(x % 3 == 0) x++;
        else if(x % 3 == 1) x *= 2;
        else if(x % 3 == 2) x *= 3;
        ans++;
    }
    cout << ans << "\n";
    return 0;
}