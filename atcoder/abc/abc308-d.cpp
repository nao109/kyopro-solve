#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
const string snuke = "snuke";
int main(){
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0; i < h; ++i) cin >> s[i];

    if(s[0][0] != 's'){
        cout << "No\n";
        return 0;
    }

    vector<vector<int>> dist(h, vector<int>(w, -1));
    queue<pair<int, int>> que;

    dist[0][0] = 0;
    que.push({0, 0});

    while(!que.empty()){
        int x, y;
        tie(x, y) = que.front();
        que.pop();

        for(int i = 0; i < 4; i++){
            int nx = x + dx[i], ny = y + dy[i];
            if(0 <= nx && nx < h && 0 <= ny && ny < w){
                if(dist[nx][ny] != -1) continue;

                bool flag = false;

                for(int i = 0; i < 5; i++){
                    if(s[x][y] == snuke[dist[x][y] % 5]){
                        if(s[nx][ny] == snuke[(dist[x][y] + 1) % 5]){
                            flag = true;
                        }
                    }
                }
                if(!flag) continue;

                dist[nx][ny] = dist[x][y] + 1;
                que.push({nx, ny});
            }
        }
    }
    
    cout << (dist[h - 1][w - 1] != -1 ? "Yes\n" : "No\n");
    return 0;
}