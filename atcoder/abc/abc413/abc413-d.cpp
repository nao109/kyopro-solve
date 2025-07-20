#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<ll, ll>> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].se;
            a[i].fi = abs(a[i].se);
        }
        sort(a.begin(), a.end());

        bool ans = true;
        for(int i = 0; i < n - 2; i++){
            if(a[i].se * a[i + 2].se != a[i + 1].se * a[i + 1].se){
                ans = false;
            }
        }
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}
