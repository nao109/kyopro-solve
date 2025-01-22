#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define fi first
#define se second
using mint = modint998244353;
int main(){
    int q;
    cin >> q;
    deque<int> s;
    s.push_back(1);
    mint ans = 1;
    for(int i = 0; i < q; ++i){
        int k;
        cin >> k;
        if(k == 1){
            int x;
            cin >> x;
            ans = ans * 10 + x;
            s.push_back(x);
        }
        else if(k == 2){
            ans -= mint(10).pow((int)s.size() - 1) * s.front();
            s.pop_front();
        }
        else cout << ans.val() << endl;
    }
    return 0;
}