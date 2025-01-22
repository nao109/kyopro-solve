#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'j' || s[i] == 'i') ans += 2;
        if(s[i] == 'o') ans += 1;
    }
    cout << ans << "\n";
    return 0;
}