#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int dx[8] = {1, 1, 1, 0, -1, -1, -1, 0}, dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
    string snuke = "snuke";
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0; i < h; i++) cin >> s[i];

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(s[i][j] != 's') continue;

            for(int k = 0; k < 8; k++){
                string ans;
                int ny = i, nx = j;
                int cnt;
                for(cnt = 0; cnt < 5; cnt++){
                    if(s[ny][nx] != snuke[cnt]) break;
                    ans.push_back(s[ny][nx]);
                    ny += dy[k], nx += dx[k];
                    if(ny < 0 || h <= ny || nx < 0 || w <= nx) break;
                }
                if(ans == snuke){
                    for(int l = 0; l < 5; l++){
                        cout << i + 1 + l * dy[k] << " " << j + 1 + l * dx[k] << endl;
                    }
                    return 0;
                }
            }
        }
    }
    return 0;
}