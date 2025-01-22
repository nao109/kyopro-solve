#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << min({a * b, a * c, b * c}) << " " << max({a * b, a * c, b * c}) << endl;
    return 0;
}