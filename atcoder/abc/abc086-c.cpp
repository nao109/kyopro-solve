#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<int> t(n + 1, 0), x(n + 1, 0), y(n + 1, 0);
    for(int i = 1; i <= n; ++i) cin >> t[i] >> x[i] >> y[i];

    bool flag = true;

    for(int i = 1; i < n + 1; ++i){
        int dt = t[i] - t[i - 1], dx = abs(x[i] - x[i - 1]), dy = abs(y[i] - y[i - 1]);
        if(dt < dx + dy) flag = false;
        if(dt % 2 != (dx + dy) % 2) flag = false;
    }

    cout << (flag ? "Yes\n" : "No\n");
    return 0;
}