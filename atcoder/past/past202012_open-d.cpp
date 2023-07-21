#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<pair<pair<string, int>, string>> s(n);
    int max_ss = 0;
    for(int i = 0; i < n; i++){
        cin >> s[i].se;
        max_ss = max((int)s[i].se.size(), max_ss);
    }

    for(int i = 0; i < n; i++){
        int cnt0 = 0;
        while(s[i].se[cnt0] == '0') cnt0++;
        s[i].fi.se = -cnt0;

        int ss = s[i].se.size();
        s[i].fi.fi.assign(max_ss - ss, '0');
        s[i].fi.fi += s[i].se;
    }

    sort(s.begin(), s.end());

    for(int i = 0; i < n; i++) cout << s[i].se << endl;
    return 0;
}