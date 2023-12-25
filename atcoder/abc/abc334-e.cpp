#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const ll dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;

int main(){
    ll h, w;
    cin >> h >> w;
    vector<string> s(h);
    for(ll i = 0; i < h; i++) cin >> s[i];

    auto cid = [&](ll i, ll j) -> ll {
        return i * w + j;
    };
    auto inglid = [&](ll y, ll x) -> bool {
        return (0 <= y && y < h && 0 <= x && x < w);
    };

    dsu d(h * w);
    for(ll y = 0; y < h; y++){
        for(ll x = 0; x < w; x++){
            for(ll i = 0; i < 4; i++){
                ll ny = y + dy[i], nx = x + dx[i];
                if(inglid(ny, nx)){
                    if(s[ny][nx] == s[y][x]){
                        d.merge(cid(y, x), cid(ny, nx));
                    }
                }
            }
        }
    }

    set<ll> leader;
    for(ll y = 0; y < h; y++){
        for(ll x = 0; x < w; x++){
            if(s[y][x] == '.') continue;
            leader.insert(d.leader(cid(y, x)));
        }
    }

    vector<ll> cnt;
    ll num = leader.size();

    for(ll y = 0; y < h; y++){
        for(ll x = 0; x < w; x++){
            if(s[y][x] == '#') continue;

            set<int> v;
            for(ll i = 0; i < 4; i++){
                ll ny = y + dy[i], nx = x + dx[i];
                if(inglid(ny, nx)){
                    if(s[ny][nx] == '#'){
                        v.insert(d.leader(cid(ny, nx)));
                    }
                }
            }

            cnt.push_back(num + 1 - (ll)v.size());
        }
    }

    mint sum = 0;
    for(ll i = 0; i < (ll)cnt.size(); i++) sum += cnt[i];
    sum /= (ll)cnt.size();
    cout << sum.val() << endl;
    return 0;
}