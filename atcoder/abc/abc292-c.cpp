#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    ll ans = 0;
    vector<ll> div(n - 1, 0);
    for(int i = 1; i < n; ++i){
        for(int j = 1; j * j <= i; ++j){
            if(i % j == 0){
                if(j * j == i) div[i - 1]++;
                else div[i - 1] += 2;
            }
        }
    }

    for(int i = 1; i < n; ++i){
        ans += div[i - 1] * div[n - i - 1];
    }
    cout << ans << endl;
    return 0;
}