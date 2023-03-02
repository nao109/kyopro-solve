#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for(int i = 0; i < n; ++i) cin >> s[i];

    int dx[9] = {0, 1, 1, 0, -1, -1, -1, 0, 1}, dy[9] = {0, 0, 1, 1, 1, 0, -1, -1, -1};
    vector<vector<int>> ans(n, vector<int>(m));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            for(int k = 0; k < 9; ++k){
                int nx = i + dx[k], ny = j + dy[k];
                if(0 <= nx && nx < n && 0 <= ny && ny <= m){
                    if(s[nx][ny] == '#') ans[i][j]++;
                }
            }
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}
