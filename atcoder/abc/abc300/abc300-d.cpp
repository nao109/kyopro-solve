#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    vector<ll> p;
    for(ll i = 2; i * i<= 100000000000ll; i++){
        bool flag = true;
        for(ll j = 2; j * j <= i; j++){
            if(i % j == 0) flag = false;
        }
        if(flag) p.push_back(i);
    }
    int ps = p.size();

    ll n;
    cin >> n;

    int ans = 0;
    for(int i = 0; i < ps; i++){
        for(int j = i + 1; j < ps; j++){
            for(int k = j + 1; k < ps; k++){
                ll v = p[i] * p[i] * p[j];
                if(v > n) break;
                v *= p[k];
                if(v > n) break;
                v *= p[k];
                if(v > n) break;
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}