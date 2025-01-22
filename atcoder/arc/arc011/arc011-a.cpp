#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int m, n, N;
    cin >> m >> n >> N;
    
    int ans = N;
    int from = 0;
    while(1){
        from += N;
        if(from < m) break;
        N = (from / m) * n;
        from %= m;
        ans += N;
    }

    cout << ans << endl;
    return 0;
}