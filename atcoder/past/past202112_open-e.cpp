#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    set<char> left, right;
    for(int i = 0; i < 5; ++i) left.insert('1' + i);
    for(int i = 0; i < 4; ++i) right.insert('6' + i);
    right.insert('0');

    string s;
    cin >> s;
    int n = s.size();
    ll ans = 0;
    for(int i = 0; i < n; ++i){
        if(i == 0) ans += 500;
        else if(s[i - 1] == s[i]) ans += 301;
        else if(left.count(s[i - 1]) && left.count(s[i])) ans += 210;
        else if(right.count(s[i - 1]) && right.count(s[i])) ans += 210;
        else ans += 100;
    }
    cout << ans << endl;
    return 0;
}