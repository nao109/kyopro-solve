#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for(int i = 0; i < m; i++) cin >> a[i];

    for(int i = 1; i <= n; i++){
        auto itr = lower_bound(a.begin(), a.end(), i);
        cout << *itr - i << endl;
    }
    return 0;
}