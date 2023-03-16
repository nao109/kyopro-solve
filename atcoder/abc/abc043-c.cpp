#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const ll inf = 1000000000;
int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    ll cost = inf;
    for(int i = -100; i <= 100; ++i){
        ll sum = 0;
        for(int j = 0; j < n; ++j){
            sum += (a[j] - i) * (a[j] - i);
        }
        cost = min(sum, cost);
    }
    cout << cost << endl;
    return 0;
}