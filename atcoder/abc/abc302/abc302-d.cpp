#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    ll n, m, d;
    cin >> n >> m >> d;
    vector<ll> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(b.begin(), b.end());

    ll ma = -1;
    for(int i = 0; i < n; i++){
        int ok = -1, ng = m;
        while(abs(ok - ng) > 1){
            int mid = (ok + ng) / 2;
            if(b[mid] <= a[i] + d) ok = mid;
            else ng = mid;
        }

        if(a[i] - d <= b[ok] && b[ok] <= a[i] + d){
            ma = max(ma, a[i] + b[ok]);
        }
    }
    cout << ma << endl;
    return 0;
}