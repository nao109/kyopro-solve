#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    vector<string> s(h);
    for(int i = 0; i < h; i++) cin >> s[i];
    string t;
    cin >> t;

    set<pair<int, int>> present;
    pair<int, int> now = {x - 1, y - 1};
    for(int i = 0; i < (int)t.size(); i++){
        if(s[now.fi][now.se] == '@') present.emplace(now.fi, now.se);

        pair<int, int> next = now;
        if(t[i] == 'U') next.fi--;
        else if(t[i] == 'D') next.fi++;
        else if(t[i] == 'L') next.se--;
        else if(t[i] == 'R') next.se++;

        if(s[next.fi][next.se] != '#') now = next;
    }

    if(s[now.fi][now.se] == '@') present.emplace(now.fi, now.se);

    now.fi++, now.se++;
    cout << now.fi << " " << now.se << " " << present.size() << "\n";
    return 0;
}
