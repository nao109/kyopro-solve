#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    ll x, y;
    cin >> x >> y;
    set<ll> div;
    for(ll i = 1; i * i <= x - 2015; ++i){
        if((x - 2015) % i == 0){
            div.insert(i);
            div.insert((x - 2015) / i);
        }
    }

    set<ll> ans;
    for(ll i : div){
        if((y - 2015) % i == 0) ans.insert(i);
    }

    for(ll i : ans) cout << i << endl;
    return 0;
}