#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    ll n;
    cin >> n;
    vector<ll> l(n), r(n);
    for(ll i = 0; i < n; i++) cin >> l[i] >> r[i];

    ll min_sum = 0;
    for(ll i = 0; i < n; i++) min_sum += l[i];
    ll max_sum = 0;
    for(ll i = 0; i < n; i++) max_sum += r[i];
    if(min_sum > 0 || max_sum < 0){
        cout << "No\n";
        return 0;
    }

    vector<ll> ans(n);
    ans = l;
    for(ll i = 0; i < n; i++){
        if(min_sum >= 0) continue;
        if(min_sum + r[i] - l[i] <= 0){
            ans[i] = r[i];
            min_sum += r[i] - l[i];
        }
        else{
            ans[i] -= min_sum;
            min_sum = 0;
        }
    }

    if(min_sum == 0){
        cout << "Yes\n";
        for(ll i = 0; i < n; i++){
            cout << ans[i] << " \n"[i == n - 1];
        }
    }
    else cout << "No\n";
    return 0;
}
