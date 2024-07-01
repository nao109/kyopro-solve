#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s;
    cin >> s;
    if(s[0] == 'R' && s[1] == 'M') cout << "Yes\n";
    else if(s[0] == 'R' && s[2] == 'M') cout << "Yes\n";
    else if(s[1] == 'R' && s[2] == 'M') cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
