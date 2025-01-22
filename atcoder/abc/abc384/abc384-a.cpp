#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    char c1, c2;
    string s;
    cin >> n >> c1 >> c2 >> s;
    for(int i = 0; i < n; i++){
        cout << (s[i] != c1 ? c2 : s[i]);
    }
    cout << "\n";
    return 0;
}
