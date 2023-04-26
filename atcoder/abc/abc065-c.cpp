#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#include <atcoder/all>
using namespace atcoder;
using mint = modint1000000007;
int main(){
    int n, m;
    cin >> n >> m;
    mint ans = 1;
    if(abs(n - m) > 1) ans = 0;
    else{
        if(n % 2 == m % 2){
            for(int i = 1; i <= n; i++) ans *= i;
            for(int i = 1; i <= m; i++) ans *= i;
            ans *= 2;
        }
        else{
            for(int i = 1; i <= n; i++) ans *= i;
            for(int i = 1; i <= m; i++) ans *= i;
        }
    }
    cout << ans.val() << endl;
    return 0;
}