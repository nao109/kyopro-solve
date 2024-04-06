#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }

int main(){
    int n;
    cin >> n;
    vector<int> a(n), c(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> c[i];

    map<int, int> del;
    for(int i = 0; i < n; i++){
        if(!del.count(c[i])) del[c[i]] = a[i];
        else if(del[c[i]] > a[i]) del[c[i]] = a[i];
    }

    int ans = 0;
    for(auto [c, a] : del) chmax(ans, a);
    cout << ans << "\n";
    return 0;
}
