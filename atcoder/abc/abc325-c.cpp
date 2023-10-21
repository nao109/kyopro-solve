#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
#define fi first
#define se second
const int dx[8] = {1, 0, -1, 1, -1, 1, 0, -1};
const int dy[8] = {1, 1, 1, 0, 0, -1, -1, -1};
int main(){
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0; i < h; i++) cin >> s[i];

    dsu d(h * w);
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(s[i][j] == '#'){
                for(int k = 0; k < 8; k++){
                    if(0 <= i + dx[k] && i + dx[k] < h && 0 <= j + dy[k] && j + dy[k] < w){
                        if(s[i + dx[k]][j + dy[k]] == '#'){
                            d.merge(w * i + j, w * (i + dx[k]) + j + dy[k]);
                        }
                    }
                }
            }
        }
    }
    
    vector<vector<int>> dg = d.groups();

    int ans = 0;
    for(int i = 0; i < (int)dg.size(); i++){
        if(s[dg[i][0] / w][dg[i][0] % w] == '#') ans++;
    }
    cout << ans << endl;
    return 0;
}