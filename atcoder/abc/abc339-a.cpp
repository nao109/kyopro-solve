#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s;
    cin >> s;
    string ans = "";
    int n = s.size();
    for(int i = 1; i <= n; i++){
        if(s[n - i] == '.') break;
        else ans.push_back(s[n - i]);
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}