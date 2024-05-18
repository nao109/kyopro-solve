#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int h;
    cin >> h;
    int ans = 0;
    int hp = 0;
    while(h >= hp) hp += (1 << ans), ans++;
    cout << ans << "\n";
    return 0;
}
