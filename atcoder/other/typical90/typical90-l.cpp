#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
#define fi first
#define se second
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int main(){
    int h, w, q;
    cin >> h >> w >> q;

    vector<bool> g(h * w, 0);
    dsu d(h * w);
    auto f = [w](int r, int c){return r * w + c;};

    while(q--){
        int k;
        cin >> k;
        if(k == 1){
            int r, c;
            cin >> r >> c;
            r--, c--;
            g[f(r, c)] = 1;
            for(int i = 0; i < 4; i++){
                if(r + dx[i] >= 0 && r + dx[i] < h && c + dy[i] >= 0 && c + dy[i] < w){
                    if(g[f(r, c)] == g[f(r + dx[i], c + dy[i])]){
                        d.merge(f(r, c), f(r + dx[i], c + dy[i]));
                    }
                }
            }
        }
        if(k == 2){
            int ra, ca, rb, cb;
            cin >> ra >> ca >> rb >> cb;
            ra--, ca--, rb--, cb--;
            if(d.same(f(ra, ca), f(rb, cb)) && g[f(ra, ca)] == 1) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}