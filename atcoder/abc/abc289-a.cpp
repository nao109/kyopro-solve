#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; ++i){
        if(s[i] == '0') s[i] = '1';
        else s[i] = '0';
    }
    cout << s << endl;
    return 0;
}