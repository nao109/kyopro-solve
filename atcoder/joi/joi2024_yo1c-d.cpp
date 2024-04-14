#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int k, n, m;
    cin >> k >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; i++) cin >> b[i];

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i] + k == b[j]) ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
