#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    string ans;
    if(a < b && b < c) ans = "B";
    if(a < c && c < b) ans = "C";
    if(b < a && a < c) ans = "A";
    if(b < c && c < a) ans = "C";
    if(c < a && a < b) ans = "A";
    if(c < b && b < a) ans = "B";
    cout << ans << endl;
    return 0;
}
