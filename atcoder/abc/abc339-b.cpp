#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const int dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1 ,0};


int main(){
    int h, w, n;
    cin >> h >> w >> n;

    vector color(h, vector<int>(w));
    pair<int, int> now = {0, 0};
    int d = 0;

    for(int i = 0; i < n; i++){
        if(color[now.fi][now.se] == 0){
            color[now.fi][now.se] = 1;
            d = (d + 1) % 4;
        }
        else{
            color[now.fi][now.se] = 0;
            d = (d + 3) % 4;
        }
        now.fi = (now.fi + h + dy[d]) % h;
        now.se = (now.se + w + dx[d]) % w;
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(color[i][j] == 0) cout << ".";
            else cout << "#";
        }
        cout << "\n";
    }
    return 0;
}