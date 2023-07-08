#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
 
void solve(set<ll> &ans){
    int n;
    cin >> n;
    cout << (ans.count(n) ? "YES\n" : "NO\n");
}
 
int main(){
    set<ll> ans;
    for(ll i = 2; i <= 1000; i++){
        ll cnt = 1 + i, k = i * i;
        while(cnt <= 1000000){
            cnt += k;
            ans.insert(cnt);
            k *= i;
        }
        ans.insert(cnt);
    }
 
    int q;
    cin >> q;
    while(q--) solve(ans);
    return 0;
}
