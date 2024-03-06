#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

bool isprime(long long n){
    if(n < 2) return false;
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    ll n;
    cin >> n;

    set<ll> prime;
    for(ll i = 2; i * i * i <= n; i++){
        if(isprime(i)) prime.insert(i);
    }

    ll ans = 0;
    for(ll i : prime){
        if(i * i * i > n) break;
        auto it = prime.upper_bound(min(i - 1, n  / (i * i * i)));
        ans += distance(prime.begin(), it);
    }
    cout << ans << "\n";
    return 0;
}