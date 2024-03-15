#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, q;
    string s;
    cin >> n >> s >> q;

    map<char, char> replace;
    for(int i = 0; i < q; i++){
        char c, d;
        cin >> c >> d;
        if(!replace.count(c)) replace[c] = d;
        for(char i = 'a'; i <= 'z'; i++){
            if(replace.count(i) && replace[i] == c) replace[i] = d;
        }
    }

    for(int i = 0; i < n; i++){
        if(replace.count(s[i])) cout << replace[s[i]];
        else cout << s[i];
    }
    cout << "\n";
    return 0;
}