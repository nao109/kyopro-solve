#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int w, h, n;
    cin >> w >> h >> n;
    vector<int> x(n), y(n);
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

    int ans = 0;
    for(int i = 1; i < n; i++){
        int distx = abs(x[i] - x[i - 1]);
        int disty = abs(y[i] - y[i - 1]);

        if(x[i] >= x[i - 1] && y[i] < y[i - 1]) ans += distx + disty;
        else if(x[i] < x[i - 1] && y[i] >= y[i - 1]) ans += distx + disty;
        else ans += min(distx, disty) + abs(distx - disty);
    }
    cout << ans << "\n";
    return 0;
}
