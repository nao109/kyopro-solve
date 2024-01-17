#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
using P = pair<int, int>;

int main(){
    int n, q;
    cin >> n >> q;
    vector<P> pos;
    for(int i = n; i >= 1; i--) pos.push_back({i, 0});
    int s = n;
    while(q--){
        int k;
        cin >> k;
        if(k == 1){
            char c;
            cin >> c;
            int x, y;
            tie(x, y) = pos.back();
            if(c == 'L') x--;
            if(c == 'R') x++;
            if(c == 'U') y++;
            if(c == 'D') y--;
            pos.push_back({x, y});
            s++;
        }
        else{
            int p;
            cin >> p;
            cout << pos[s - p].fi << " " << pos[s - p].se << endl;
        }
    }
    return 0;
}