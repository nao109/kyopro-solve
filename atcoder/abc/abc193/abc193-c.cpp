#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    ll n;
    cin >> n;

    set<ll> ans;

    for(ll i = 2; i <= 100000; i++){
        ll k = i * i;
        while(k <= n){
            ans.insert(k);
            k *= i;
        }
    }
    cout << n - (ll)ans.size() << endl;
    return 0;
}