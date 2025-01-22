#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; ++i) cin >> a[i];

    int ans = 0;
    for(int i = 0; i < m; ++i){
        int b;
        cin >> b;
        ans += a[b - 1];
    }
    
    cout << ans << endl;
    return 0;
}