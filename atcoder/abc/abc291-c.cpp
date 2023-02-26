#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;
    set<pair<int, int>> chk;
    pair<int, int> pos = {0, 0};
    chk.insert(pos);
    for(int i = 0; i < n; ++i){
        if(s[i] == 'R') pos.fi++;
        else if(s[i] == 'L') pos.fi--;
        else if(s[i] == 'U') pos.se++;
        else pos.se--;
        chk.insert(pos);
    }
    int chks = chk.size();
    if(chks == n + 1) cout << "No\n";
    else cout << "Yes\n";
    return 0;
}