#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, t, p;
    cin >> n >> t >> p;
    vector<int> l(n);
    for(int i = 0; i < n; i++) cin >> l[i];
    sort(l.begin(), l.end());

    cout << max(0, t - l[n - p]) << "\n";
    return 0;
}
