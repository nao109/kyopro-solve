#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s;
    cin >> s;
    for(int i = 1; i < (int)s.size() - 1; i++){
        if(s[i] != s[i - 1] && s[i] != s[i + 1]){
            cout << i + 1 << endl;
            return 0;
        }
    }
    if(s[0] != s[1]) cout << 1 << endl;
    else cout << s.size() << endl;
    return 0;
}
