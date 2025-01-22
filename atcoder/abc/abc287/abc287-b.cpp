#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<string> s(n), t(m);
    for(int i = 0; i < n; ++i) cin >> s[i];
    for(int i = 0; i < m; ++i) cin >> t[i];

    int ans = 0;
    for(int i = 0; i < n; ++i){
        bool flag = false;
        for(int i = 0; i < n; ++i){
            if(s[3] == t[0] && s[4] == t[1] && s[5] == t[2]) flag = true;
        }
        if(flag) ans++;
    }

    cout << ans << endl;
    return 0;
}