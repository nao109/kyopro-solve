#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    for(int i = 1; i < 16; i += 2){
        if(s[i] == '1'){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}