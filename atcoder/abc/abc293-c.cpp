#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            cin >> a[i][j];
        }
    }
    
    int ans = 0;
    for(int i = 0; i < (1 << 20); ++i){
        int cnt = 0;
        for(int bit = 0; bit < 20; ++bit){
            if(i & (1 << bit)) cnt++;
        }
        if(cnt != 10) continue;

        bool flag = true;
        set<int> used;
        used.insert(a[0][0]);
        int nx = 0, ny = 0;
        for(int bit = 0; bit < 20; ++bit){
            if(i & (1 << bit)) ny++;
            else nx++;
            if(nx >= h || ny >= h) break;

            if(used.count(a[nx][ny])) break;
            else used.insert(a[nx][ny]);
        }
        if((int)used.size() == h + w - 1) ans++;
    }
    cout << ans << endl;
    return 0;
}