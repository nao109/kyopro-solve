#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, p, q;
    cin >> n >> p >> q;
    vector<int> d(n);
    for(int i = 0; i < n; i++) cin >> d[i];

    int mi = p;
    for(int i = 0; i < n; i++) mi = min(mi, d[i] + q);
    cout << mi << endl;
    return 0;
}