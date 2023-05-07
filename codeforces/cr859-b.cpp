#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

void solve(){
    int n;
    cin >> n;
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a % 2 == 0) even += a;
        else odd += a;
    }
    cout << (even > odd ? "YES\n" : "NO\n");
}

int main(){
    int q;
    cin >> q;
    while(q--) solve();
    return 0;
}