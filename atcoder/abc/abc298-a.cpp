#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;
    bool a1 = false, a2 = true;
    for(int i = 0; i < n; ++i){
        if(s[i] == 'o') a1 = true;
        else if(s[i] == 'x') a2 = false;
    }
    cout << (a1 && a2 ? "Yes\n" : "No\n");
    return 0;
}