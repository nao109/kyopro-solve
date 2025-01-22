#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    vector<ll> diff;
    ll d = 0;
    for(int i = 0; i < n; ++i){
        if(a[i - 1] >= a[i]){
            diff.push_back(i - d);
            d = i;
        }
    }
    if(d < n) diff.push_back(n - d);

    ll ans = 0;
    for(int i = 0; i < (int)diff.size(); ++i){
        ans += diff[i] * (diff[i] + 1) / 2;
    }
    cout << ans << endl;
    return 0;
}