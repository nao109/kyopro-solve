#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n = 8;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    set<int> y, x;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(s[i][j] == '#'){
                y.insert(i);
                x.insert(j);
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!y.count(i) && !x.count(j)) ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
