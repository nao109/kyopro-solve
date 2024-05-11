#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    if(x < z && z < y) cout << "Yes\n";
    else if(x > z && z > y) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
