#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define fi first
#define se second

const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int main(){
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<int>> a(h, vector<int>(w));
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> a[i][j];
            a[i][j]--;
        }
    }
    vector<int> c(n);
    for(int i = 0; i < n; i++) cin >> c[i];

    bool is_different = true;
    for(int y = 0; y < h; y++){
        for(int x = 0; x < w; x++){
            for(int i = 0; i < 4; i++){
                int ny = y + dy[i], nx = x + dx[i];
                if(0 <= ny && ny < h && 0 <= nx && nx < w){
                    if(a[y][x] != a[ny][nx] && c[a[y][x]] == c[a[ny][nx]]){
                        is_different = false;
                    }
                }
            }
        }
    }
    cout << (is_different ? "Yes\n" : "No\n");
    return 0;
}
