#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    for(int i = 2; i < 5; ++i){
        if(s[i] == s[i - 1] && s[i] == s[i - 2]){
            cout << (s[i] == 'o' ? "o\n" : "x\n");
            return 0;
        }
    }
    cout << "draw\n";
    return 0;
}