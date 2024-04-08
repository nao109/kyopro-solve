#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

const int dy[4] = {0, 1, 0, -1}, dx[4] = {1, 0, -1, 0};
using P = pair<int, int>;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> a(h);
    for(int i = 0; i < h; i++) cin >> a[i];
    vector<vector<int>> e(h, vector<int>(w, 0));
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int r, c, x;
        cin >> r >> c >> x;
        r--, c--;
        e[r][c] = x;
    }

    // find S, T
    P s, t;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(a[i][j] == 'S') s = {i, j};
            else if(a[i][j] == 'T') t = {i, j};
        }
    }

    // BFS
    // pos[i][j] : (i, j)から直接行けるマス
    vector<vector<set<P>>> pos(h, vector<set<P>>(w));
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            // 壁か薬なしのスタートは無視
            if(a[i][j] == '#' || e[i][j] == 0) continue;

            vector dist(h, vector<int>(w, -1));
            queue<P> que;
            dist[i][j] = 0;
            que.emplace(i, j);

            while(!que.empty()){
                int y, x;
                tie(y, x) = que.front();
                que.pop();

                for(int k = 0; k < 4; k++){
                    int ny = y + dy[k], nx = x + dx[k];
                    if(0 <= ny && ny < h && 0 <= nx && nx < w){
                        // 空きマス以外は無視
                        if(a[ny][nx] != '.' && a[ny][nx] != 'T') continue;
                        // すでに見たなら無視
                        if(dist[ny][nx] != -1) continue;
                        
                        dist[ny][nx] = dist[y][x] + 1;
                        // 到達可能ならqueにpush
                        if(dist[ny][nx] <= e[i][j]) que.emplace(ny, nx);
                        else dist[ny][nx] = -1;

                        // 到達可能かつ、薬ありかゴールならpos[i][j]にpush
                        if(dist[ny][nx] != -1 && (e[ny][nx] > 0 || a[ny][nx] == 'T')){
                            pos[i][j].emplace(ny, nx);
                        }
                    }
                }
            }
        }
    }

    // BFS
    vector dist(h, vector<int>(w, -1));
    queue<P> que;
    dist[s.fi][s.se] = 0;
    que.emplace(s.fi, s.se);
    while(!que.empty()){
        int y, x;
        tie(y, x) = que.front();
        que.pop();
        for(auto [ny, nx] : pos[y][x]){
            if(dist[ny][nx] != -1) continue;
            dist[ny][nx] = dist[y][x] + 1;
            que.emplace(ny, nx);
        }
    }

    cout << (dist[t.fi][t.se] != -1 ? "Yes\n" : "No\n");
    return 0;
}
