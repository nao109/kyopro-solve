#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    ll n, m;
    cin >> n >> m;
    if(m < n) cout << m << endl;
    else if(n * n < m) cout << -1 << endl;
    else{
        for(ll i = 0; i <= n; ++i){
            for(ll j = 2; j * j <= m + i; ++j){
                if((m + i) % j == 0 && (m + i) / j <= n){
                    cout << m + i << endl;
                    return 0;
                }
            }
        }
        cout << -1 << endl;
    }
    return 0;
}