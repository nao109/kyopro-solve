#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, t;
    cin >> n >> t;
    vector<int> c(n), r(n);
    for(int i = 0; i < n; ++i) cin >> c[i];
    for(int i = 0; i < n; ++i) cin >> r[i];

    map<int, map<int, int>> cr;
    for(int i = 0; i < n; ++i){
        cr[c[i]][r[i]] = i;
    }

    int ma = 0;
    int ans = 0;
    if(cr.count(t)){    
        for(auto [r, i] : cr[t]){
            if(ma < r){
                ans = i;
                ma = r;
            }
        }
    }
    else{
        for(auto [r, i] : cr[c[0]]){
            if(ma < r){
                ans = i;
                ma = r;
            }
        }
    }

    cout << ans + 1 << endl;

    return 0;
}