#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    bool in0 = false;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 0) in0 = true;
    }

    if(in0){
        cout << 0 << endl;
        return 0;
    }

    ll a_max = 1e18;
    for(int i = 0; i < n; i++) a_max /= a[i];
    if(a_max < 1){
        cout << -1 << endl;
        return 0;
    }

    ll ans = 1;
    for(int i = 0; i < n; i++) ans *= a[i];
    cout << ans << endl;
    return 0;
}