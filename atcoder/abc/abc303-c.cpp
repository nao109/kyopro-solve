#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m, h, k;
    string s;
    cin >> n >> m >> h >> k >> s;
    set<pair<int, int>> xy;
    for(int i = 0; i < m; ++i){
        int x, y;
        cin >> x >> y;
        xy.emplace(x, y);
    }

    if(n <= h){
        cout << "Yes\n";
        return 0;
    }

    pair<int, int> now = {0, 0};
    for(int i = 0; i < n; i++){
        if(s[i] == 'R') now.fi++;
        if(s[i] == 'L') now.fi--;
        if(s[i] == 'U') now.se++;
        if(s[i] == 'D') now.se--;
        h--;
        if(h < 0){
            cout << "No\n";
            return 0;
        }
        if(xy.count(now) && h < k){
            h = k;
            xy.erase(now);
        }
    }
    cout << "Yes\n";
    return 0;
}