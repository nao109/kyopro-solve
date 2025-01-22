#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a >= b * c) cout << c << endl;
    else cout << fixed << setprecision(10) << (long double)a / b << endl;
    return 0;
}