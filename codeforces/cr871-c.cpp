#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
 
void solve(){
    int n;
    cin >> n;
    map<int, int> t;
    for(int i = 0; i < n; i++){
        int m, s;
        cin >> m >> s;
        if(t.count(s)) t[s] = min(t[s], m);
        else t[s] = m;
    }
 
    int mi = 1000000;
    if(t.count(11)) mi = t[11];
    if(t.count(1) && t.count(10)) mi = min(t[01] + t[10], mi);
    cout << (mi < 1000000 ? mi : -1) << endl;
}
 
int main(){
    int q;
    cin >> q;
    while(q--) solve();
    return 0;
}