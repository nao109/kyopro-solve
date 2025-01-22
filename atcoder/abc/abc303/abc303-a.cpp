#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s, t;
    cin >> s >> t;
    for(int i = 0; i < n; i++){
        if(s[i] == t[i]) continue;
        if(s[i] == '1' && t[i] == 'l') continue;
        if(s[i] == 'l' && t[i] == '1') continue;
        if(s[i] == '0' && t[i] == 'o') continue;
        if(s[i] == 'o' && t[i] == '0') continue;
        cout << "No\n";
        return 0;
    }
    cout << "Yes\n";
    return 0;
}