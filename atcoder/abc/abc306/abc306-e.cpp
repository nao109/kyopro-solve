#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, k, q;
    cin >> n >> k >> q;
    vector<ll> a(n + 1, 0);
    map<ll, ll> asorted;
    asorted[0] = n;

    for(int i = 0; i < q; i++){
        ll x, y;
        cin >> x >> y;
        asorted[a[x]]--;
        asorted[y]++;
        a[x] = y;
        ll sum = 0, cnt = 0;
        for(auto i = asorted.rbegin(); cnt < k; ++i){
            sum += min(k - cnt, i->se) * i->fi;
            cnt += i->se;
        }
        cout << sum << endl;
    }
    return 0;
}