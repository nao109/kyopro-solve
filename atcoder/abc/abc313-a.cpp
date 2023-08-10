#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];

    int ans = 0;
    for(int i = 1; i < n; i++){
        ans = max(ans, p[i] - p[0] + 1);
    }
    cout << ans << endl;
    return 0;
}