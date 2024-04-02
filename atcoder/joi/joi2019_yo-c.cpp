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

    for(int i = 1; i < n;){
        if(s[i - 1] != s[i]) ans++, i += 2;
        else i++;
    }

    cout << ans << "\n";
    return 0;
}
