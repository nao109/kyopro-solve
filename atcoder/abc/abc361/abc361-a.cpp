#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < k; i++) cout << a[i] << " ";
    cout << x << " ";
    for(int i = k; i < n; i++) cout << a[i] << " \n"[i == n - 1];
    return 0;
}
