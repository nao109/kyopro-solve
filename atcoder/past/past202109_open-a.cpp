#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min(a + b - c, d) << endl;
    return 0;
}