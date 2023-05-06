#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int q;
    cin >> q;
    for(; q > 0; q--){
        int n, t;
        cin >> n >> t;
        int ans = -1, ma = 0;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        for(int i = 0; i < n; i++){
            if(t >= a[i]){
                if(ma < b[i]){
                    ans = i + 1;
                    ma = b[i];
                }
            }
            t--;
        }

        cout << ans << endl;
    }
    return 0;
}