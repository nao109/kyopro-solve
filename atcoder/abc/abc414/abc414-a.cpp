#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, l, r;
    cin >> n >> l >> r;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        if(x <= l && r <= y) ans++;
    }
    cout << ans << "\n";
    return 0;
}
