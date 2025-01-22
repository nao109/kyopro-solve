#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    long double n, k;
    cin >> n >> k;
    long double ans = (3 * (n - 1) + 6 * (k - 1) * (n - k) + 1) / (n * n * n);
    cout << fixed << setprecision(15) << ans << endl;
    return 0;
}