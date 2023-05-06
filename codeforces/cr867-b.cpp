#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int t;
    cin >> t;
    for(; t > 0; t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        ll ma = max(a[0] * a[1], a[n - 2] * a[n - 1]);
        cout << ma << endl;
    }
    return 0;
}