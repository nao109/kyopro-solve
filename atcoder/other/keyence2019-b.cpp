#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    int n = s.size();

    string keyence = "keyence";
    int cnt = 7;
    for(int i = 1; i <= 7; i++){
        if(s.substr(0, i) == keyence.substr(0, i)) cnt--;
    }
    cout << ((s.substr(n - cnt) == keyence.substr(7 - cnt)) ? "YES\n" : "NO\n");
    return 0;
}