#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, d;
    cin >> n >> d;
    map<int, int> maxl;
    for(int i = 0; i < n; i++){
        int t, l;
        cin >> t >> l;
        if(maxl[t] < l) maxl[t] = l;
    }

    for(int k = 1; k <= d; k++){
        int ans = 0;
        for(auto [t, l] : maxl){
            if(t * (l + k) > ans){
                ans = t * (l + k);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
