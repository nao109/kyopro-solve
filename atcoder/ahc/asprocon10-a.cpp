#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

// スコアの降順にソートする
bool comp(const pair<pair<int, int>, int> &a, const pair<pair<int, int>, int> &b){
    return a.fi.se + a.fi.fi > b.fi.se + b.fi.fi;
}

int main(){
    // 入力
    int T, H, W, i_0;
    cin >> T >> H >> W >> i_0;
    vector<string> h(H - 1), v(H);
    for(int i = 0; i < H - 1; i++) cin >> h[i];
    for(int i = 0; i < H; i++) cin >> v[i];
    int K;
    cin >> K;
    // dsk[i].fi.fi : D[i], dsk[i].fi.se : S[i] * (-1), dsk[i].se : K[i] - 1
    vector<pair<pair<int, int>, int>> dsk(K);
    for(int i = 0; i < K; i++){
        cin >> dsk[i].fi.se >> dsk[i].fi.fi;
        dsk[i].fi.se *= -1;
        dsk[i].se = i;
    }

    // map作成 水路:'#', 区画:'.'
    vector<string> g(H * 2 + 1);

    // map初期化
    for(int i = 0; i < H * 2 + 1; i++){
        for(int j = 0; j < W * 2 + 1; j++){
            if(i % 2 == 0) g[i].push_back('#');
            else g[i].push_back(j % 2 == 0 ? '#' : '.');
        }
    }

    // map形成
    g[i_0 * 2 + 1][0] = '.';
    for(int i = 0; i < H - 1; i++){
        for(int j = 0; j < W; j++){
            if(h[i][j] == '0') g[i * 2 + 2][j * 2 + 1] = '.';
        }
    }
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W - 1; j++){
            if(v[i][j] == '0') g[i * 2 + 1][j * 2 + 2] = '.';
        }
    }

    // mapをBFSして出入口から各区画までの最短距離dist[i][j]を出したい
    vector dist(H * 2 + 1, vector<int>(W * 2 + 1, -1));
    queue<pair<int, int>> que;
    dist[i_0 * 2 + 1][1] = 0;
    que.push({i_0 * 2 + 1, 1});
    while(!que.empty()){
        int x, y;
        tie(x, y) = que.front();
        que.pop();
        for(int k = 0; k < 4; k++){
            int nx = x + dx[k], ny = y + dy[k];
            if(0 <= nx && nx < H * 2 + 1 && 0 <= ny && ny < W * 2 + 1){
                if(dist[nx][ny] == -1 && g[nx][ny] == '.'){
                    dist[nx][ny] = dist[x][y] + 1;
                    que.push({nx, ny});
                }
            }
        }
    }
    
    // dist[i][j]が奇数なら-1にする
    for(int i = 0; i < H * 2 + 1; i++){
        for(int j = 0; j < W * 2 + 1; j++){
            if(dist[i][j] % 2 == 1) dist[i][j] = -1;
        }
    }

    /* mapを出力する
    for(int i = 0; i < H * 2 + 1; i++) cerr << g[i] << endl;
    for(int i = 0; i < H * 2 + 1; i++){
        for(int j = 0; j < W * 2 + 1; j++){
            cerr << right << setw(2) << dist[i][j] << " \n"[j == W * 2];
        }
    }
    */

    // 初期化 [0]:育てるか, [1]:区画のx座標, [2]:区画のy座標, [3]:植える月
    vector<tuple<bool, pair<int, int>, int>> kijs(K);
    for(int i = 0; i < K; i++) get<0>(kijs[i]) = false;
    
    // 育てるのに使った区画を管理する2次元配列を宣言
    vector used(H * 2 + 1, vector<bool>(W * 2 + 1, false));

    // 育てる作物をスコアが大きくなる順にソートする
    sort(dsk.begin(), dsk.end(), comp);

    // スコア上位のH*W種類の作物を収穫する時期が遅い順にソート
    sort(dsk.begin(), dsk.begin() + (H * W), greater<pair<pair<int, int>, int>>());

    // 育てる区画をソートしたsdkの添え字のはやい順から決める
    for(int i = 0; i < K; i++){
        int max_dist = 0;
        pair<int, int> max_place = {-1, -1};

        for(int x = 0; x < H * 2 + 1; x++){
            for(int y = 0; y < W * 2 + 1; y++){
                if(dist[x][y] >= 0 && dist[x][y] >= max_dist && !used[x][y]){
                    max_dist = dist[x][y];
                    max_place = {x, y};
                }
            }
        }

        if(max_place.fi >= 0 && max_place.se >= 0){
            used[max_place.fi][max_place.se] = true;

            max_place.fi = (max_place.fi - 1) / 2;
            max_place.se = (max_place.se - 1) / 2;
            int k = dsk[i].se;
            get<0>(kijs[k]) = true;
            get<1>(kijs[k]) = max_place;
            get<2>(kijs[k]) = 1;
        }
    }

    // 出力
    int m = 0;
    for(int i = 0; i < K; i++){
        if(get<0>(kijs[i])) m++;
    }
    cout << m << endl;
    for(int i = 0; i < K; i++){
        if(get<0>(kijs[i])){
            cout << i + 1 << " " << get<1>(kijs[i]).fi << " " << get<1>(kijs[i]).se << " " << get<2>(kijs[i]) << "\n";
        }
    }
    return 0;
}