#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int k;
    cin >> k;
    
    vector<ll> ans;

    string s = "9876543210";
    for(int i = 0; i < (1 << 10); i++){
        ll n = 0;
        for(int bit = 0; bit < 10; bit++){
            if(i & (1 << bit)) n = n * 10 + s[bit] - '0';
        }
        if(n > 0) ans.push_back(n);
    }
    sort(ans.begin(), ans.end());

    cout << ans[k - 1] << endl;
    return 0;
}