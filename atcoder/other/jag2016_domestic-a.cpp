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

    bool flag = true;
    int a_cnt = 0, un_cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == "A") a_cnt++;
        else un_cnt++;
        if(a_cnt < un_cnt) flag = false;
    }
    if(a_cnt != un_cnt) flag = false;
    cout << (flag ? "YES\n" : "NO\n");
    return 0;
}
