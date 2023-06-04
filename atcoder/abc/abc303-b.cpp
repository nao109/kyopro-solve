#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(n));
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
            a[i][j]--;
        }
    }

    vector<set<int>> next(n);
    for(int i = 0; i < m; i++){
        for(int j = 1; j < n; j++){
            next[a[i][j - 1]].insert(a[i][j]);
            next[a[i][j]].insert(a[i][j - 1]);
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += n - 1 - next[i].size();
    }
    cout << ans / 2 << endl;
    return 0;
}