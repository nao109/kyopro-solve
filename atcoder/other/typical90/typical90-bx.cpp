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

    ll sum = 0;
    for(int i = 0; i < n; i++) sum += a[i];

    if(sum % 10 != 0){
        cout << "No\n";
        return 0;
    }

    vector<ll> cumsum(2 * n + 1);
    cumsum[0] = 0;
    for(int i = 1; i <= 2 * n; i++){
        cumsum[i] = cumsum[i - 1] + a[(i - 1) % n];
    }

    for(int i = 0; i <= 2 * n; i++){
        auto itr = lower_bound(cumsum.begin() + i, cumsum.begin() + (i + n), cumsum[i] + sum / 10);
        if(itr != cumsum.end() && *itr == cumsum[i] + sum / 10){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}