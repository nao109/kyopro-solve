#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << max(0, -a) * c + (a < 0) * d + min(b - a, b) * e << endl;
    return 0;
}