#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    ll x;
    cin >> x;
    if(x >= 0) cout << (x + 9) / 10 << "\n";
    else cout << x / 10 << "\n";
    return 0;
}
