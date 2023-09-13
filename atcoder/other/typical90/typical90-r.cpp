#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const long double PI = acos(-1);
int main(){
    int t;
    long double l, x, y;
    cin >> t >> l >> x >> y;
    int q;
    cin >> q;
    while(q--){
        long double e;
        cin >> e;
        e /= t;

        long double h = l / 2 * (1 - cos(2 * PI * e));
        long double w = - l / 2 * sin(2 * PI * e);
        long double len = sqrt(x * x + (y - w) * (y - w));

        long double ans = acos(len / sqrt(len * len + h * h)) * 180 / PI;
        cout << fixed << setprecision(10) << ans << endl;
    }
    return 0;
}