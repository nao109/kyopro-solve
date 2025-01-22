#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
const int INF = 1e9;

vector<pair<int, int>> make_map(int &H, int &W, int &i_0, vector<string> &h, vector<string> &v){
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

    // 出入口からの距離が短い順の区画の座標
    vector<pair<int, int>> place_rotate;

    // mapをDFSして、距離が短い順にplace_rotateにpush backする
    vector dist(H * 2 + 1, vector<int>(W * 2 + 1, -1));
    queue<pair<int, int>> que;
    dist[i_0 * 2 + 1][1] = 0;
    place_rotate.emplace_back(i_0 * 2 + 1, 1);
    que.emplace(i_0 * 2 + 1, 1);
    while(!que.empty()){
        int x, y;
        tie(x, y) = que.front();
        que.pop();
        for(int k = 0; k < 4; k++){
            int nx = x + dx[k], ny = y + dy[k];
            if(0 <= nx && nx < H * 2 + 1 && 0 <= ny && ny < W * 2 + 1){
                if(dist[nx][ny] == -1 && g[nx][ny] == '.'){
                    dist[nx][ny] = dist[x][y] + 1;
                    if(dist[nx][ny] % 2 == 0) place_rotate.emplace_back(nx, ny);
                    que.push({nx, ny});
                }
            }
        }
    }

    return place_rotate;
}

void plants(queue<pair<pair<int, int>, int>> &plant, int &last_harvest, int &harvest, vector<tuple<int, pair<int, int>, int>> &kijs, pair<int, int> place){
    // 育てる作物をdskの添字の順に選ぶ
    pair<pair<int, int>, int> p;
    while(!plant.empty()){
        p = plant.front();
        plant.pop();
        if(last_harvest == 0 || p.fi.se >= last_harvest + 1) break;
    }
    
    // 次に一斉に植える月に植えられなかったら、あきらめる
    if(p.fi.se < last_harvest + 1) return;

    place.fi = (place.fi - 1) / 2;
    place.se = (place.se - 1) / 2;
    harvest = max(p.fi.fi, harvest);
    kijs.emplace_back(p.se, place, last_harvest + 1);

    return;
}

vector<tuple<int, pair<int, int>, int>> make_table(vector<pair<pair<int, int>, int>> &dsk, vector<pair<int, int>> &place_rotate){
    // 育てる作物を植える時期がはやい順にソートする
    sort(dsk.begin(), dsk.end());

    // 育てる作物を植えていくキューを宣言
    queue<pair<pair<int, int>, int>> plant;

    // 育てる作物を植えていく順にキューに入れていく
    for(auto i : dsk) plant.push(i);

    // 初期化 [0]:育てる作物の番号, [1]:区画のx座標, [2]:区画のy座標, [3]:植える月
    vector<tuple<int, pair<int, int>, int>> kijs;

    // 最後に一斉に収穫した月
    int last_harvest = 0;

    // mapをBFSしながら出入口から各区画までの距離が短い順に植えたい
    while(1){
        // 次に一斉に植える月が100ヶ月以降なら、やめる
        if(last_harvest >= 100) break;

        // 今回、植える作物の中で一番収穫が遅いのを収穫する月
        int harvest = 0;

        // place_rotateを見ながら、植えられるところに植えていく
        for(auto plant_place : place_rotate){
            plants(plant, last_harvest, harvest, kijs, plant_place);
        }

        // 育てられる作物がなくなったら終わる
        if(plant.empty()) break;
        
        last_harvest = harvest;
    }

    return kijs;
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
    // dsk[i].fi.fi : D[i], dsk[i].fi.se : S[i], dsk[i].se : K[i] - 1
    vector<pair<pair<int, int>, int>> dsk;
    for(int i = 0; i < K; i++){
        int s, d;
        cin >> s >> d;
        dsk.push_back({{d, s}, i + 1});
    }

    // 生成したmap
    vector<pair<int, int>> place_rotate = make_map(H, W, i_0, h, v);

    // 出力するtable
    vector<tuple<int, pair<int, int>, int>> kijs= make_table(dsk, place_rotate);

    // 出力
    cout << kijs.size() << endl;
    for(auto [k, ij, s] : kijs){
        cout << k << " " << ij.fi << " " << ij.se << " " << s << "\n";
    }
    return 0;
}