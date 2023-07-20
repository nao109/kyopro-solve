#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    
    if(s[3] != '-'){
        cout << "No\n";
        return 0;
    }
    for(int i = 0; i < 8; i++){
        if(i == 3) continue;
        if(s[i] < '0' || s[i] > '9'){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}