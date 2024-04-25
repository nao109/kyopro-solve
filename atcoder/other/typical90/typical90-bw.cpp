#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    ll n;
    cin >> n;
    int d_sum = 0;
    for(ll i = 2; i * i <= n; i++){
        int cnt = 0;
        while(n % i == 0){
            cnt++;
            n /= i;
        }
        d_sum += cnt;
    }
    if(n > 1) d_sum++;

    int ans = 0, k2 = 1;
    while(k2 < d_sum) k2 *= 2, ans++;
    cout << ans << "\n";
    return 0;
}
