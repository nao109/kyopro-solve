#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a + b == c ? "+\n" : "-\n");
}

int main(){
    int q;
    cin >> q;
    while(q--) solve();
    return 0;
}