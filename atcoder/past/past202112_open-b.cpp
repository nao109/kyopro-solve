#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; ++i){
        int a, b;
        cin >> a >> b;
        int change = b - a;
        change %= 100;
        ans += change / 50;
        change %= 10;
        ans += change / 5;
    }
    cout << ans << endl;
    return 0;
}