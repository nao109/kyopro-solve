#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0; i < h; i++) cin >> s[i];

    int ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(s[i][j] == '#') continue;
            vector<vector<int>> dist(h, vector<int>(w, -1));
            queue<pair<int, int>> que;
            dist[i][j] = 0;
            que.push({i, j});

            while(!que.empty()){
                int x, y;
                tie(x, y) = que.front();
                que.pop();
                for(int k = 0; k < 4; k++){
                    int nx = x + dx[k], ny = y + dy[k];
                    if(0 <= nx && nx < h && 0 <= ny && ny < w){
                        if(dist[nx][ny] == -1 && s[nx][ny] == '.'){
                            dist[nx][ny] = dist[x][y] + 1;
                            que.push({nx, ny});
                        }
                    }
                }
            }

            
            for(int s = 0; s < h; s++){
                for(int t = 0; t < w; t++){
                    ans = max(ans, dist[s][t]);
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}