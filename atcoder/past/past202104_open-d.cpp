#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    vector<ll> sum(n + 1, 0);
    for(int i = 0; i < n; i++){
        sum[i + 1] += sum[i] + a[i];
    }

    for(int i = 0; i < n - k + 1; i++) cout << sum[i + k] - sum[i] << endl;
    return 0;
}