#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
 
void solve(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(a > b) ans++;
    }
    cout << ans << endl;
}
 
int main(){
    int q;
    cin >> q;
    while(q--) solve();
    return 0;
}
