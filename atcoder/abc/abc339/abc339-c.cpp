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

    vector<ll> ss(n + 1);
    ss[0] = 0;
    for(int i = 1; i <= n; i++) ss[i] = ss[i - 1] + a[i - 1];

    ll min_cnt = 0;
    for(int i = 0; i <= n; i++){
        if(ss[i] < min_cnt) min_cnt = ss[i];
    }
    cout << ss.back() + abs(min_cnt) << "\n";
    return 0;
}