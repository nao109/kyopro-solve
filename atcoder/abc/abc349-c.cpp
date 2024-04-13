#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s, t;
    cin >> s >> t;
    int n = s.size();
    
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] - 'a' + 'A' == t[cnt]) cnt++;
    }
    if(cnt == 3) cout << "Yes\n";
    else if(cnt == 2 && t[2] == 'X') cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
