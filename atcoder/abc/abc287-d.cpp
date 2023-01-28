#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s, t;
    cin >> s >> t;
    int ts = t.size();

    for(int i = 0; i <= ts; ++i){
        bool flag = true;
        string ss = s.substr(0, i) + s.substr(i + 1, ts - i);
        if(ss[0] != '?' && t[0] != '?' && ss[0] != t[0]){
            cout << "No\n";
            continue;
        }
        for(int j = 1; j < ts; ++j){
            if(ss[j] == '?' || t[j] == '?') continue;
            if(ss[j] != t[j]) flag = false;
        }

        cout << (flag ? "Yes\n" : "No\n");
    }
    return 0;
}