#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
 
void solve(){
    int n, m, h;
    cin >> n >> m >> h;
    vector<vector<int>> t(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> t[i][j];
        }
        sort(t[i].begin(), t[i].end());
    }
 
    vector<vector<int>> time(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        time[i][0] = t[i][0];
        for(int j = 1; j < m; j++){
            time[i][j] = time[i][j - 1] + t[i][j];
        }
    }
 
    vector<pair<pair<int, int>, int>> point(n, {{0, 0}, 0});
    vector<int> time_solved(n, 0);
    for(int i = 0; i < n; i++){
        point[i].se = i;
        
        for(int j = 0; j < m; j++){
            if(time_solved[i] + t[i][j] <= h){
                time_solved[i] += t[i][j];
                point[i].fi.fi--;
                point[i].fi.se += time[i][j];
            }
        }
    }
    sort(point.begin(), point.end());
 
    for(int i = 0; i < n; i++){
        if(point[i].se == 0) cout << i + 1 << endl;
    }
}
 
int main(){
    int q;
    cin >> q;
    while(q--) solve();
    return 0;
}
