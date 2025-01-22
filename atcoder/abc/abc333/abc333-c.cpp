#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }

int main(){
    ll n;
    cin >> n;

    vector<ll> repunit(13, 1);
    for(ll i = 1; i < 13; i++) repunit[i] = repunit[i - 1] * 10 + 1;
    
    set<ll> sum;
    for(ll i = 0; i < 13; i++){
        for(ll j = 0; j < 13; j++){
            for(ll k = 0; k < 13; k++){
                sum.insert(repunit[i] + repunit[j] + repunit[k]);
            }
        }
    }

    ll count = 0;
    for(ll i : sum){
        count++;
        if(count == n){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}