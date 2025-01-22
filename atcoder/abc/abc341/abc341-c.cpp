#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int h, w, n;
    string t;
    cin >> h >> w >> n >> t;
    vector<string> s(h);
    for(int i = 0; i < h; i++) cin >> s[i];

    set<pair<int, int>> pos;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            bool flag = (s[i][j] == '.');

            int y = i, x = j;
            for(int k = 0; k < n; k++){
                if(t[k] == 'L') x--;
                if(t[k] == 'R') x++;
                if(t[k] == 'U') y--;
                if(t[k] == 'D') y++;

                if(y < 0 || y >= h || x < 0 || x >= w){
                    flag = false;
                    break;
                }
                if(s[y][x] == '#'){
                    flag = false;
                }
            }

            if(flag) pos.insert(make_pair(i, j));
        }
    }
    cout << pos.size() << "\n";
    return 0;
}