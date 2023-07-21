#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    for(int i = 0; i < 3; i++){
        if(s.substr(i, 3) == "ooo"){
            cout << "o\n";
            return 0;
        }
        else if(s.substr(i, 3) == "xxx"){
            cout << "x\n";
            return 0;
        }
    }
    cout << "draw\n";
    return 0;
}