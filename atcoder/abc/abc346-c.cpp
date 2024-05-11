#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, k;
    cin >> n >> k;
    set<int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.insert(x);
    }

    int ans = k * (k + 1) / 2;
    for(int i : a) ans -= i;
    cout << ans << "\n";
    return 0;
}
