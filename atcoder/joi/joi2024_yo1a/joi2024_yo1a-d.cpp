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
    set<int> num;
    for(int i = 0; i < n; i++) num.insert(a[i]);
    for(int i : num) cout << i << "\n";
    return 0;
}