#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int dfs(vector<string> &s, vector<vector<int>> &seen, int y, int x, int ny, int nx){
    int h = s.size(), w = s[0].size();
    seen[ny][nx] = w * y + x;

    int res = 1;
    for(int i = 0; i < 4; i++){
        int nny = ny + dy[i], nnx = nx + dx[i];
        if(0 <= nny && nny < h && 0 <= nnx && nnx < w){
            if(s[nny][nnx] == '#') return res;
        }
    }

    for(int i = 0; i < 4; i++){
        int nny = ny + dy[i], nnx = nx + dx[i];
        if(0 <= nny && nny < h && 0 <= nnx && nnx < w){
            if(seen[nny][nnx] == w * y + x) continue;
            res += dfs(s, seen, y, x, nny, nnx);
        }
    }
    return res;
}

template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }
const int INF = 1e9;
const ll INFLL = 1e18;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0; i < h; i++) cin >> s[i];

    vector seen(h, vector<int>(w, -1));
    int ans = 1;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(s[i][j] == '#') continue;
            if(seen[i][j] != -1) continue;

            int num = dfs(s, seen, i, j, i, j);
            chmax(ans, num);
        }
    }
    cout << ans << "\n";
    return 0;
}
