#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int x, y;
    cin >> x >> y;
    if(x == 0 && y == 0) cout << 0 << endl;
    else if(x == 0 || y == 0) cout << 1 << endl;
    else cout << 2 << endl;
    return 0;
}