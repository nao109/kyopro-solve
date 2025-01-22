#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    vector<pair<string, int>> user(n);
    for(int i = 0; i < n; i++) cin >> user[i].fi >> user[i].se;
    sort(user.begin(), user.end());

    int t = 0;
    for(int i = 0; i < n; i++) t += user[i].se;
    t %= n;

    cout << user[t].fi << "\n";
    return 0;
}
