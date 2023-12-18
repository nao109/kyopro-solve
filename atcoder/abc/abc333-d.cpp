#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }
const ll INF = 1e18;
int main(){
    ll n;
    cin >> n;
    vector<vector<ll>> g(n);
    for(ll i = 0; i < n - 1; i++){
        ll u, v;
        cin >> u >> v;
        u--, v--;
        if(u != 0 && v != 0){
            g[u].push_back(v);
            g[v].push_back(u);
        }
        else if(u == 0) g[u].push_back(v);
        else g[v].push_back(u);
    }

    vector<ll> num;
    for(ll v : g[0]){
        set<int> seen;
        stack<ll> st;
        seen.insert(v);
        st.push(v);

        while(!st.empty()){
            ll v = st.top();
            st.pop();
            seen.insert(v);
            for(ll nv : g[v]){
                if(seen.count(nv)) continue;
                st.push(nv);
            }
        }

        ll count = (ll)seen.size();
        num.push_back(count);
    }

    sort(num.begin(), num.end());

    ll ans = 1;
    for(ll i : num) ans += i;
    ans -= num.back();
    cout << ans << endl;
    return 0;
}