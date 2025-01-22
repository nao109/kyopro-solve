#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
    int r, c, sy, sx, gy, gx;
    cin >> r >> c >> sy >> sx >> gy >> gx;
    sy--, sx--, gy--, gx--;
    vector<string> s(r);
    for(int i = 0; i < r; i++) cin >> s[i];

    vector<vector<int>> dist(r, vector<int>(c, -1));
    queue<pair<int, int>> que;
    dist[sy][sx] = 0;
    que.push({sy, sx});

    while(!que.empty()){
        int x, y;
        tie(y, x) = que.front();
        que.pop();
        for(int k = 0; k < 4; k++){
            int ny = y + dy[k], nx = x + dx[k];
            if(0 <= ny && ny < r && 0 <= nx && nx < c){
                if(dist[ny][nx] == -1 && s[ny][nx] == '.'){
                    dist[ny][nx] = dist[y][x] + 1;
                    que.push({ny, nx});
                }
            }
        }
    }

    cout << dist[gy][gx] << endl;
    return 0;
}