#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    vector<string> s(3);
    cin >> s[0] >> s[1] >> s[2];
    reverse(s[0].begin(), s[0].end());
    reverse(s[1].begin(), s[1].end());
    reverse(s[2].begin(), s[2].end());

    char now = 'a';
    while(1){
        if(s[now - 'a'].empty()) break;
        char n = s[now - 'a'].back();
        s[now - 'a'].pop_back();
        now = n;
    }
    now -= 'a' - 'A';
    cout << now << endl;
    return 0;
}