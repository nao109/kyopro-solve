#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;

    if(t.substr(0, n) == s && t.substr(m - n, n) == s) cout << 0 << endl;
    else if(t.substr(0, n) == s && t.substr(m - n, n) != s) cout << 1 << endl;
    else if(t.substr(0, n) != s && t.substr(m - n, n) == s) cout << 2 << endl;
    else cout << 3 << endl;
    return 0;
}