#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> sf(n);
    for(int i = 0; i < n; ++i) cin >> sf[i].se >> sf[i].fi;
    sort(sf.begin(), sf.end(), greater<pair<int, int>>());

    int ans = 0;
    for(int i = 1; i < n; i++){
        if(sf[i].se == sf[0].se){
            ans = max(ans, sf[0].fi + sf[i].fi / 2);
        }
        else{
            ans = max(ans, sf[0].fi + sf[i].fi);
        }
    }
    cout << ans << endl;
    return 0;
}