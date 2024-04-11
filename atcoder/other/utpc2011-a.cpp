#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int m, n;
    cin >> m >> n;
    vector<int> cnt(m, 0);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            cnt[i] += x;
        }
    }
    sort(cnt.begin(), cnt.end());
    cout << cnt.back() << "\n";
    return 0;
}
