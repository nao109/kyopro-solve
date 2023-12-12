#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, l, r;
    cin >> n >> l >> r;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a >= l && a <= r) cout << a << " \n"[i == n - 1];
        else if(a < l) cout << l << " \n"[i == n - 1];
        else if(a > r) cout << r << " \n"[i == n - 1];
    }
    return 0;
}