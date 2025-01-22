#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<long double> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    vector<pair<long double, int>> ab(n);
    for(int i = 0; i < n; i++){
        ab[i].fi = a[i] / (a[i] + b[i]);
        ab[i].se = -(i + 1);
    }
    sort(ab.begin(), ab.end(), greater<pair<long double, int>>());

    for(int i = 0; i < n; i++) cout << -ab[i].se << endl;
    return 0;
}