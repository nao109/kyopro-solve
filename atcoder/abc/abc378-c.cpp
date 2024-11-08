#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> b(n);
    map<int, int> m;
    for(int i = 0; i < n; i++){
        if(!m.count(a[i])) m[a[i]] = -1;
        b[i] = m[a[i]];
        m[a[i]] = i + 1;
    }
    for(int i = 0; i < n; i++) cout << b[i] << " \n"[i == n - 1];
    return 0;
}
