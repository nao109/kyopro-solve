#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for(int i = 0; i < n; i++) a[i] = i + 1;
    reverse(a.begin() + l - 1, a.begin() + r);
    for(int i = 0; i < n; i++) cout << a[i] << " \n"[i == n - 1];
    return 0;
}
