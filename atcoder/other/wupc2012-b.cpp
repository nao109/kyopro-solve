#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    sort(s.begin(), s.end());
    cout << s[0] + s[1] << endl;
    return 0;
}