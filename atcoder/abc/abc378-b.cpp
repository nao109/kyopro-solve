#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> qr(n);
    for(int i = 0; i < n; i++) cin >> qr[i].fi >> qr[i].se;

    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int t, d;
        cin >> t >> d;
        t--;
        if(d % qr[t].fi <= qr[t].se) cout << d + (qr[t].se - d % qr[t].fi) << "\n";
        else cout << d + (qr[t].fi + qr[t].se - d % qr[t].fi) << "\n";
    }
    return 0;
}
