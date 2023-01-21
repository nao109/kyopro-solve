#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(), a.end()
int main(){
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    p--, q--, r--, s--;

    vector<int> a(n);
    for(int i=0; i<n; ++i) cin >> a[i];
    for(int i=p; i<=q; ++i) swap(a[i], a[i+r-p]);
    for(int i=0; i<n; ++i) cout << a[i] << (i<n-1 ? " " : "\n");
    return 0;
}