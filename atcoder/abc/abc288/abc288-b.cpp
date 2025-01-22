#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, k;
    cin >> n >> k;
    vector<string> s(n);
    for(int i = 0; i < n; ++i) cin >> s[i];
    sort(s.begin(), s.begin() + k);
    for(int i = 0; i < k; ++i) cout << s[i] << endl;
    return 0;
}