#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> cost(m, 0);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        if(a < b) cost[i] = b - n;
    }
    sort(cost.begin(), cost.end());

    int ans = 0;
    for(int i = 0; i < m - 1; i++) ans += cost[i];
    cout << ans << endl;
    return 0;
}