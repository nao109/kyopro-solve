#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

map<ll, ll> memo;
ll dfs(ll n){
    if(n == 1) return 0;

    if(memo[n] != 0) return memo[n];
    ll res = dfs(n / 2) + dfs((n + 1) / 2) + n;
    memo[n] = res;
    return res;
}

// メモ化再帰
int main(){
    ll n;
    cin >> n;

    ll ans = 0;
    map<ll, ll> memo;
    ans = dfs(n);
    cout << ans << endl;
    return 0;
}