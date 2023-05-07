#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

void solve(){
    ll n, k;
    cin >> n >> k;

    bool flag = true;
    if(n % 2 == 1 && (k % 2 == 0 || n < k)) flag = false;
    cout << (flag ? "YES\n" : "NO\n");
}

int main(){
    int q;
    cin >> q;
    while(q--) solve();
    return 0;
}