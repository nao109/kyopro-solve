#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for(int i = 0; i < 1000; ++i){
        string t;
        if(i < 10) t = "00" + to_string(i);
        else if(i < 100) t = "0" + to_string(i);
        else t = to_string(i);
        int chk = 0;
        for(int i = 0; i < n; ++i){
            if(chk < 3 && t[chk] == s[i]) chk++;
        }
        if(chk == 3) ans++;
    }
    cout << ans << endl;
    return 0;
}
