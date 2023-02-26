#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<int> x(5 * n);
    for(int i = 0; i < 5 * n; ++i) cin >> x[i];
    sort(x.begin(), x.end());
    long double ans = 0;
    for(int i = n; i < 4 * n; ++i) ans += x[i];
    ans /= (3 * n);
    cout << ans << endl;
    return 0;
}