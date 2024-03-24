#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int ans = 0;

    while(c > 0){
        c -= a;
        if(ans % 7 == 6) c -= b;
        ans++;
    }

    cout << ans << "\n";
    return 0;
}
