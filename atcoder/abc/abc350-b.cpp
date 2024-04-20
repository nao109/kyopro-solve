#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> t(q);
    for(int i = 0; i < q; i++) cin >> t[i];

    vector<bool> teeth(n, true);

    for(int i = 0; i < q; i++){
        teeth[t[i] - 1] = !teeth[t[i] - 1];
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(teeth[i]) ans++;
    }
    cout << ans << "\n";
    return 0;
}
