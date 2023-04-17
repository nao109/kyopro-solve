#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

ll string_mod(deque<char> &s, ll mod){
    ll rest = 0;
    for(int i = 0; i < (int)s.size(); ++i){
        ll v = s[i] - '0';
        rest = (rest * 10 + v) % mod;
    }
    return rest;
}

int main(){
    deque<char> s;
    s.push_back('1');
    int q;
    cin >> q;
    for(int i = 0; i < q; ++i){
        int k;
        cin >> k;
        if(k == 1){
            char x;
            cin >> x;
            s.push_back(x);
        }
        else if(k == 2) s.pop_front();
        else cout << string_mod(s, 998244353) << endl;           
    }
    return 0;
}