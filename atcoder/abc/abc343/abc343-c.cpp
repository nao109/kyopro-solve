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

    ll ans = 0;
    for(ll i = 1; i * i * i <= n; i++){
        string s = to_string(i * i * i);
        int sz = s.size();
        bool is_ok = true;
        for(int i = 0; i < sz; i++){
            if(s[i] != s[sz - 1 - i]) is_ok = false;
        }
        if(is_ok) chmax(ans, i * i * i);
    }
    cout << ans << "\n";
    return 0;
}