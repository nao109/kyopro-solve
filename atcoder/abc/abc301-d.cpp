#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    int n;
    cin >> s >> n;

    ll num = 0;
    vector<int> q;
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] == '?') q.push_back(i);
        else if(s[i] == '1') num += (1ll << ((int)s.size() - i - 1));
    }
    ll cnt = (int)q.size();

    if(num > n){
        cout << "-1\n";
        return 0;
    }

    ll ans = num;
    for(ll i = 0; i < (1ll << cnt); i++){
        ll s = num;
        for(int bit = 0; bit < cnt; bit++){
            if(i & (1ll << bit)){
                if((1ll << q[bit]) + num > n) goto end;
                s += (1ll << q[bit]);
            }
            if(s > n) break;
        }
        if(s < n) ans = max(ans, s);
    }

end:
    cout << ans << endl;
    return 0;
}