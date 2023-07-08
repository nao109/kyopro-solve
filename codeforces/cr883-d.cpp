#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
 
void solve(){
    int n;
    long double d, h;
    cin >> n >> d >> h;
    vector<long double> y(n);
    for(int i = 0; i < n; i++) cin >> y[i];
 
    long double ans = d * h / 2;
 
    for(int i = 1; i < n; i++){
        ans += d * h / 2;
        if(y[i] < y[i - 1] + h){
            ans -= (d * (y[i - 1] + h - y[i]) / h) * (y[i - 1] + h - y[i]) / 2;
        }
    }
 
    cout << fixed << setprecision(10) << ans << endl;
 
}
 
int main(){
    int q;
    cin >> q;
    while(q--) solve();
    return 0;
}
