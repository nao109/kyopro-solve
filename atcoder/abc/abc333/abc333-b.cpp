#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }

int main(){
    string s, t;
    cin >> s >> t;

    int s_diff = abs(s[0] - s[1]);
    int t_diff = abs(t[0] - t[1]);

    if(s_diff == t_diff || s_diff + t_diff == 5) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}