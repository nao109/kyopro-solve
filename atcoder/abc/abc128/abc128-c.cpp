#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<set<int>> s(m);
    vector<int> p(m);
    for(int i = 0; i < m; ++i){
        int k;
        cin >> k;
        for(int j = 0; j < k; ++j){
            int x;
            cin >> x;
            s[i].insert(x - 1);
        }
    }
    for(int i = 0; i < m; ++i) cin >> p[i];
    
    int ans = 0;
    for(int i = 0; i < (1 << n); ++i){
        bool flag = true;
        for(int j = 0; j < m; ++j){
            int chk = 0;
            for(int bit = 0; bit < n; ++bit){
                if(i & (1 << bit)){
                    if(s[j].count(bit)) chk++;
                }
            }
            if(chk % 2 != p[j]) flag = false;
        }
        if(flag) ans++;
    }
    cout << ans << endl;
    return 0;
}