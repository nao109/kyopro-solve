#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

using pii = pair<int, int>;

vector<pair<pii, pii>> solve(vector<vector<int>> &b){
    vector<pair<pii, pii>> res;
    while(1){
        int cnt = 0;
        for(int i = 0; i < 29; i++){
            for(int j = 0; j <= i; j++){
                if(b[i][j] > b[i + 1][j]){
                    swap(b[i][j], b[i + 1][j]);
                    res.push_back({{i, j}, {i + 1, j}});
                    cnt++;
                }
            }
        }
        for(int i = 0; i < 29; i++){
            for(int j = 0; j <= i; j++){
                if(b[i][j] > b[i + 1][j + 1]){
                    swap(b[i][j], b[i + 1][j + 1]);
                    res.push_back({{i, j}, {i + 1, j + 1}});
                    cnt++;
                }
            }
        }
        if(cnt == 0) break;
    }
    return res;
}

int main(){
    vector<vector<int>> b(30);
    for(int i = 0; i < 30; i++){
        for(int j = 0; j <= i; j++){
            int x;
            cin >> x;
            b[i].push_back(x);
        }
    }
    
    vector<pair<pii, pii>> ans = solve(b);
    int k = ans.size();
    cout << k << endl;
    for(int i = 0; i < k; i++) cout << ans[i].fi.fi << " " << ans[i].fi.se << " " << ans[i].se.fi << " " << ans[i].se.se << endl;
    return 0;
}
