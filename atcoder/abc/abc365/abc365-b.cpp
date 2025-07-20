#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].fi;
        a[i].se = i + 1;
    }
    sort(a.begin(), a.end());
    cout << a[n - 2].se << "\n";
    return 0;
}
