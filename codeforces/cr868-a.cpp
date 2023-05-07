#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

void solve(){
    int n, k;
    cin >> n >> k;
    for(int i = 0; i <= n; ++i){
        int count = (i * (i - 1) + (n - i) * (n - i - 1)) / 2;
        if(count == k){
            cout << "YES\n";
            for(int j = 0; j < i; ++j) cout << -1 << " ";
            for(int j = 0; j < n - i; j++) cout << 1 << " \n"[j == n - i - 1];
            return;
        }
    }
    cout << "NO\n";
}

int main(){
    int q;
    cin >> q;
    while(q--) solve();
    return 0;
}