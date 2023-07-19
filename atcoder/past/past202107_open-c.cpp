#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    int l, r;
    cin >> s >> l >> r;
    
    bool ans = true;

    vector<int> cnt(10, 0);
    for(char i : s) cnt[i - '0']++;
    bool only0 = (cnt[0] == (int)s.size());
    
    if(s[0] == '0' && !(only0 && s == "0")) ans = false;

    reverse(s.begin(), s.end());
    bool flag = false;
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] != '0') flag = true;
        if(!flag) s.pop_back();
    }
    reverse(s.begin(), s.end());
    if(s.empty()) s = "0";
    if((int)s.size() <= 10){
        ll check = stol(s);
        if(check < l || check > r) ans = false;
    }
    else ans = false;

    cout << (ans ? "Yes\n" : "No\n");
    return 0;
}