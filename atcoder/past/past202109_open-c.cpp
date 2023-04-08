#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, x;
    cin >> n >> x;
    int ans = 0;
    for(int i = 0; i < n; ++i){
        int c;
        cin >> c;
        if(c == x) ans++;
    }
    cout << ans << endl;
    return 0;
}