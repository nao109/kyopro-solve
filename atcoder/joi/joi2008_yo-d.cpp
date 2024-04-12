#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int m;
    cin >> m;
    vector<pair<int, int>> star(m);
    for(int i = 0; i < m; i++) cin >> star[i].fi >> star[i].se;
    int n;
    cin >> n;
    vector<pair<int, int>> find(n);
    for(int i = 0; i < n; i++) cin >> find[i].fi >> find[i].se;

    set<pair<int, int>> s;
    for(int i = 0; i < n; i++) s.emplace(find[i].fi, find[i].se);

    for(int i = 0; i < n; i++){
        int dx = find[i].fi - star[0].fi, dy = find[i].se - star[0].se;
        bool flag = true;

        for(int j = 0; j < m; j++){
            int nx = star[j].fi + dx, ny = star[j].se + dy;
            if(!s.count({nx, ny})) flag = false;
        }
        
        if(flag) cout << dx << " " << dy << "\n";
    }
    return 0;
}
