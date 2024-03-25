#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int a, b;
    cin >> a >> b;
    vector<string> s(3);
    for(int i = 0; i < 3; i++) cin >> s[i];

    vector move(9, vector<bool>(9));
    move[a - 1][b - 1] = true;
    queue<pair<int, int>> que;
    que.emplace(a - 1, b - 1);

    while(!que.empty()){
        int x, y;
        tie(x, y) = que.front();
        que.pop();

        for(int i = -1; i <= 1; i++){
            for(int j = -1; j <= 1; j++){
                if(x + i >= 0 && x + i < 9 && y + j >= 0 && y + j < 9){
                    if(s[1 + i][1 + j] == '#' && !move[x + i][y + j]){
                        move[x + i][y + j] = true;
                        que.emplace(x + i, y + j);
                    }
                }
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(move[i][j]) ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
