#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
using mint = modint1000000007;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 6; j++){
            int x;
            cin >> x;
            a[i] += x;
        }
    }

    mint ans = 1;
    for(int i = 0; i < n; i++) ans *= a[i];
    cout << ans.val() << endl;
    return 0;
}