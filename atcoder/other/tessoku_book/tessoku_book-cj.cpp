#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());

    int q;
    cin >> q;
    for(int i = 0; i < q; ++i){
        ll x;
        cin >> x;
        ll ok = -1, ng = n;
        while(abs(ok - ng) > 1){
            ll mid = (ok + ng) / 2;
            if(a[mid] < x) ok = mid;
            else ng = mid;
        }
        cout << ok + 1 << endl;
    }
    return 0;
}