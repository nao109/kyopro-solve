#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int m;
    cin >> m;
    vector<ll> b(m);
    for(int i = 0; i < m; i++) cin >> b[i];
    int l;
    cin >> l;
    vector<ll> c(l);
    for(int i = 0; i < l; i++) cin >> c[i];

    set<ll> sum;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int k = 0; k < l; k++){
                sum.insert(a[i] + b[j] + c[k]);
            }
        }
    }

    int q;
    cin >> q;
    vector<ll> x(q);
    for(int i = 0; i < q; i++) cin >> x[i];

    for(int i = 0; i < q; i++){
        cout << (sum.count(x[i]) ? "Yes\n" : "No\n");
    }
    return 0;
}