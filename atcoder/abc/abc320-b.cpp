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

    for(int i = 0; i < n; i++){
        int max_len = 0;
        for(int j = i; j < n; j++){
            bool flag = true;
            for(int k = 0; k <= j - i; k++){
                if(s[i + k] == s[j - k]) flag = false;
            }
            if(flag) max_len = j - i + 1;
        }
        ans = max(max_len, ans);
    }

    cout << ans << endl;
    return 0;
}