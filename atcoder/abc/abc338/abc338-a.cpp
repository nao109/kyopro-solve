#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s;
    cin >> s;
    bool ans = ('A' <= s[0] && s[0] <= 'Z');
    for(int i = 1; i < (int)s.size(); i++){
        ans *= ('a' <= s[i] && s[i] <= 'z');
    }
    cout << (ans ? "Yes\n" : "No\n");
    return 0;
}