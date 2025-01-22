#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    ll L, R;
    cin >> L >> R;

    vector<ll> l, r;

    ll left = L, right;
    while(left < R){
        ll k = left;
        if(k != 0){
            while(k % 2 == 0 && left + left / k <= R) k /= 2;

            if(left + left / k > R) k *= 2;

            right = left + left / k;
        }
        else{
            right = 1;
            while(right < R) right *= 2;
            if(right > R) right /= 2;
        }

        l.push_back(left);
        r.push_back(right);

        left = right;
    }

    ll m = l.size();
    cout << m << "\n";
    for(ll i = 0; i < m; i++) cout << l[i] << " " << r[i] << "\n";
    return 0;
}
