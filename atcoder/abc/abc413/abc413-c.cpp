#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int q;
    cin >> q;
    deque<pair<ll, ll>> que;
    while(q--){
        int t;
        cin >> t;
        if(t == 1){
            ll c, x;
            cin >> c >> x;
            que.emplace_back(c, x);
        }
        else{
            ll k;
            cin >> k;
            ll ret = 0;
            while(k > 0){
                ret += que[0].se * min(k, que[0].fi);
                if(k <= que[0].fi){
                    que[0].fi -= k;
                    k = 0;
                }
                else{
                    k -= que[0].fi;
                    que.pop_front();
                }
            }
            cout << ret << "\n";
        }
    }
    return 0;
}
