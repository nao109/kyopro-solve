#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    multiset<ll> s;
    for(int i = 0; i < n; i++) s.insert(a[i]);

    sort(b.begin(), b.end(), greater<ll>());

    ll cost = 0;
    for(int i = 0; i < m; i++){
        auto it = s.lower_bound(b[i]);
        if(it == s.end()){
            cout << "-1\n";
            return 0;
        }
        
        cost += *it;
        s.erase(it);
    }

    cout << cost << "\n";
    return 0;
}
