#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int r, g, b;
    string c;
    cin >> r >> g >> b >> c;
    if(c == "Red") cout << min(g, b) << "\n";
    else if(c == "Green") cout << min(r, b) << "\n";
    else cout << min(r, g) << "\n";
    return 0;
}
