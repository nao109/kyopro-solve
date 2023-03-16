#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int ans = 0;
    for(int i = 0; i < 4; ++i){
        int a;
        cin >> a;
        if(a == 1111) ans++;
    }
    cout << ans << endl;
    return 0;
}