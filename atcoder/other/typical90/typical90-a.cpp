#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

bool f(vector<int> &a, int n, int l, int k, ll x){
    int yokan = 0;
    int last = 0;
    for(int i = 0; i < n; i++){
        if(a[i] - last >= x) yokan++, last = a[i];
    }
    if(l - last >= x) yokan++;
    return (yokan >= k + 1);
}

int main(){
    int n, l, k;
    cin >> n >> l >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll ok = -1, ng = l;
    while(abs(ok - ng) > 1){
        ll mid = (ok + ng) / 2;
        if(f(a, n, l, k, mid)) ok = mid;
        else ng = mid;
    }
    cout << ok << "\n";
    return 0;
}
