#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;

    for(int i = 0; i < n; i++){
        if(s.substr(i, 3) == "axa" || s.substr(i, 3) == "ixi" || s.substr(i, 3) == "uxu" || s.substr(i, 3) == "exe" || s.substr(i, 3) == "oxo"){
            s[i] = s[i + 1] = s[i + 2] = '.';
        }
    }
    cout << s << endl;
    return 0;
}