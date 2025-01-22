#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    sort(a.begin(), a.end(), greater());
    sort(b.begin(), b.end(), greater());

    ll sum_x = 0, sum_y = 0;
    for(int i = 0; i < n; i++){
        sum_x += a[i];
        sum_y += b[i];
        if(sum_x > x || sum_y > y){
            cout << i + 1 << "\n";
            return 0;
        }
    }
    cout << n << "\n";
    return 0;
}
