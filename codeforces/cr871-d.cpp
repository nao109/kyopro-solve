#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
 
bool dfs(int n, int m){
    if(n == m) return true;
    if(n % 3 != 0) return false;
    if(n == 3 * m || 2 * n == 3 * m) return true;
    return dfs(n / 3, m) || dfs(n / 3 * 2, m);
}
 
void solve(){
    int n, m;
    cin >> n >> m;
    cout << (dfs(n, m) ? "YES\n" : "NO\n");
}
 
int main(){
    int q;
    cin >> q;
    while(q--) solve();
    return 0;
}
