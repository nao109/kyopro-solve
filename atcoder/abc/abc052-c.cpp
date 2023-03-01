#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const ll mod = 1000000007;
int main(){
    int n;
    cin >> n;
    map<int, int> prime;
    for(int i = 1; i <= n; ++i){
        int x = i;
        for(int j = 2; j <= i; ++j){
            while(x % j == 0){
                if(prime.count(j)) prime[j]++;
                else prime[j] = 1;
                x /= j;
            }
        }
    }

    ll ans = 1;
    for(auto [i, cnt] : prime) ans = (ans * (cnt + 1)) % mod;
    cout << ans << endl;
    return 0;
}