#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    char x;
    string s;
    cin >> x >> s;
    string ans = "";
    for(int i = 0; i < (int)s.size(); ++i){
        if(s[i] != x) ans += s[i];
    }
    cout << ans << endl;
    return 0;
}