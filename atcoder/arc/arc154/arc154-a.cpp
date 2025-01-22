#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
#define fi first
#define se second
int main(){
    int n;
    string a, b;
    cin >> n >> a >> b;
    for(int i = 0; i < n; i++){
        if(a[i] > b[i]) swap(a[i], b[i]);
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    mint A = 0, B = 0, k = 1;
    for(int i = 0; i < n; i++){
        A += k * (a[i] - '0');
        B += k * (b[i] - '0');
        k *= 10;
    }
    mint ans = A * B;
    cout << ans.val() << endl;
    return 0;
}