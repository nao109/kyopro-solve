#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
 
void solve(){
    string s;
    string t = "codeforces";
    cin >> s;
    int ans = 0;
    for(int i = 0; i < 10; i++){
        if(s[i] != t[i]) ans++;
    }
    cout << ans << endl;
}
 
int main(){
    int q;
    cin >> q;
    while(q--) solve();
    return 0;
}