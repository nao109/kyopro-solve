#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int a, b, c, d, p;
    cin >> a >> b >> c >> d >> p;
    cout << min(a * p, b + min(0, p - c) * d) << endl;
    return 0;
}