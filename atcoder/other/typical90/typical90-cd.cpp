#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
using mint = modint1000000007;
#define fi first
#define se second

int log_int(ll l){
    int res = 0;
    while(l > 0){
        l /= 10;
        res++;
    }
    return res;
}

int main(){
    ll l, r;
    cin >> l >> r;

    int log_l = log_int(l), log_r = log_int(r);

    mint ml = l, mr = r;
    mint ans = 0;

    if(log_r == log_l) ans = (mr * (mr + 1) - (ml - 1) * ml) / 2 * log_l;
    else{
        mint k10 = 1;
        for(int i = 0; i < log_l; i++) k10 *= 10;
        ans = ((k10 - 1) * k10 - (ml - 1) * ml) / 2 * log_l;

        for(int i = log_l + 1; i < log_r; i++){
            ans += ((k10 * 10 - 1) * k10 * 10 - (k10 - 1) * k10) / 2 * i;
            k10 *= 10;
        }

        ans += (mr * (mr + 1) - (k10 - 1) * k10) / 2 * log_r;
    }
    cout << ans.val() << endl;
    return 0;
}