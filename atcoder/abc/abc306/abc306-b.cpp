#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    unsigned long long ans = 0;
    for(int i = 0; i < 64; i++){
        unsigned long long a;
        cin >> a;
        if(a == 1) ans += ((unsigned long long)1 << i);
    }
    cout << ans << endl;
    return 0;
}