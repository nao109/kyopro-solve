#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<set<int>> s(m);
    for(int i = 0; i < m; ++i){
        int c;
        cin >> c;
        for(int j = 0; j < c; ++j){
            int a;
            cin >> a;
            s[i].insert(a - 1);
        }
    }

    int ans = 0;
    for(int i = 0; i < (1 << m); ++i){
        vector<bool> flag(n, false);
        for(int bit = 0; bit < m; ++bit){
            if((i & (1 << bit))){
                for(int x = 0; x < n; ++x){
                    if(s[bit].count(x)) flag[x] = true;
                }
            }
        }
        bool ch = true;
        for(int i = 0; i < n; ++i){
            if(!flag[i]) ch = false;
        }
        if(ch) ans++;
          
    }
    cout << ans << endl;
    return 0;
}