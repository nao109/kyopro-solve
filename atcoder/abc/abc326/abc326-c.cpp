#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    for(int i = 1; i < n; i++) a[i] -= a[0];
    a[0] = 0;

    int ans = 0;
    for(int i = 0; i < n; i++){
        auto l = lower_bound(a.begin(), a.end(), a[i]);
        auto r = lower_bound(a.begin(), a.end(), a[i] + m);
        ans = max(ans, (int)(r - l));
    }
    cout << ans << endl;
    return 0;
}