#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

void solve(){
    int n, d;
    string s;
    cin >> n >> d >> s;

    bool used = false;
    string ans = "";
    for(int i = 0; i < n; ++i){
        if(s[i] - '0' >= d) ans += s[i];
        else{
            if(!used) ans += '0' + d;
            ans += s[i];
            used = true;
        }
    }
    if(!used) ans += '0' + d;
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) solve();
    return 0;
}