#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
map<char, int> dy = {{'R', 0}, {'D', 1}, {'L', 0}, {'U', -1}};
map<char, int> dx = {{'R', 1}, {'D', 0}, {'L', -1}, {'U', 0}};
map<char, char> inv = {{'R', 'L'}, {'D', 'U'}, {'L', 'R'}, {'U', 'D'}};

void dfs(vector<vector<bool>> &visited, vector<string> &h, vector<string> &v, vector<vector<int>> &d, string &dir, string &str, int &n, vector<vector<int>> &last_visited, int &count, ll &d_sum, ll &score, ll &ave_score, int y, int x){
    visited[y][x] = true;

    score += d_sum - d[y][x] * (count - last_visited[y][x]);
    ave_score += score;
    last_visited[y][x] = count++;

    for(char i : dir){
        int ny = y + dy[i], nx = x + dx[i];

        if(0 <= ny && ny < n && 0 <= nx && nx < n && !visited[ny][nx]){
            if((dy[i] == 0 && v[y][min(x, nx)] == '0') || (dx[i] == 0 && h[min(y, ny)][x] == '0')){
                str.push_back(i);
                dfs(visited, h, v, d, dir, str, n, last_visited, count, d_sum, score, ave_score, ny, nx);
                str.push_back(inv[i]);
                score += d_sum - d[y][x] * (count - last_visited[y][x]);
                ave_score += score;
                last_visited[y][x] = count++;
            }
        }
    }
}

int main(){
    // 入力
    int n;
    cin >> n;
    vector<string> h(n - 1), v(n);
    vector d(n, vector<int>(n));
    for(int i = 0; i < n - 1; i++) cin >> h[i];
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> d[i][j];
        }
    }

    ll d_sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            d_sum += d[i][j];
        }
    }

    vector<pair<ll, string>> res;
    string dir = "DLRU";

    // DFS From (0, 0)
    do {
        // Processing
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        string str = "";
        ll score = 0, ave_score = 0;
        vector<vector<int>> last_visited(n, vector<int>(n, 0));
        int count = 0;

        dfs(visited, h, v, d, dir, str, n, last_visited, count, d_sum, score, ave_score, 0, 0);

        // Clean Room From (0, 0)
        visited.assign(n, vector<bool>(n, false));
        str = "";
        ave_score = 0;
        dfs(visited, h, v, d, dir, str, n, last_visited, count, d_sum, score, ave_score, 0, 0);

        res.push_back({ave_score, str});
    } while(next_permutation(dir.begin(), dir.end()));
    
    sort(res.begin(), res.end());
    
    cout << res[0].se << "\n";

    // for(int i = 0; i < 24; i++) cout << res[i].se << "\n";
    return 0;
}