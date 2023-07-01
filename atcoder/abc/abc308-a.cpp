#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    vector<int> s(8);
    for(int i = 0; i < 8; i++) cin >> s[i];
    bool flag = true;
    for(int i = 0; i < 7; i++){
        if(s[i] > s[i + 1]) flag = false;
    }
    if(s[0] < 100 || s[7] > 675) flag = false;
    for(int i = 0; i < 8; i++){
        if(s[i] % 25 != 0) flag = false;
    }
    cout << (flag ? "Yes\n" : "No\n");
    return 0;
}