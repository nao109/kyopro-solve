#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    for(int i = 0; i < n;){
        if(s[i] == '0' && s[i + 1] == '0') i += 2;
        else i++;
        ans++;
    }
    cout << ans << "\n";
    return 0;
}
