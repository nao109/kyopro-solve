#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    cout << min(x / a, y / b) << endl;
    return 0;
}