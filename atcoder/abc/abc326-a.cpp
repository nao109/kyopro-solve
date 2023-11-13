#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int x, y;
    cin >> x >> y;
    if(y >= x && y <= x + 2) cout << "Yes\n";
    else if(y <= x && y >= x - 3) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}