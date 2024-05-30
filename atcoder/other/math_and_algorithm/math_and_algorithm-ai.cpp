#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> s(n + 1);
    for(int i = 0; i < n; i++) s[i + 1] = s[i] + a[i];

    while(q--){
        int l, r;
        cin >> l >> r;
        cout << s[r] - s[l - 1] << "\n";
    }
    return 0;
}