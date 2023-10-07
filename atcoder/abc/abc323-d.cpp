#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    map<ll, ll> sc;
    for(int i = 0; i < n; i++){
        int s, c;
        cin >> s >> c;
        sc[s] = c;
    }

    for(auto &[s, c] : sc){
        if(c == 0) continue;
        sc[s * 2] += c / 2;
        c %= 2;
    }

    ll ans = 0;
    for(auto [s, c] : sc) ans += c;
    cout << ans << endl;
    return 0;
}