#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }

int main(){
    string s;
    cin >> s;

    int n = s.size();
    vector<pair<char, int>> sc;
    sc.push_back(make_pair(s[0], 1));
    for(int i = 1; i < n; i++){
        if(s[i] == s[i - 1]) sc.back().se++;
        else sc.push_back(make_pair(s[i], 1));
    }

    int sz = sc.size();
    int ans = 0;
    for(int i = 0; i < sz - 2; i++){
        if(sc[i].fi == 'J' && sc[i + 1].fi == 'O' && sc[i + 2].fi == 'I'){
            if(sc[i + 1].se > sc[i].se || sc[i + 1].se > sc[i + 2].se) continue;
            chmax(ans, min({sc[i].se, sc[i + 1].se, sc[i + 2].se}));
        }
    }
    cout << ans << "\n";
    return 0;
}