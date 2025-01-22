#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, d;
    cin >> n >> d;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    vector<bool> allfree(d, false);
    for(int i = 0; i < d; i++){
        bool free = true;
        for(int j = 0; j < n; j++){
            if(s[j][i] == 'x') free = false;
        }
        if(free) allfree[i] = true;
    }

    int ans = 0, cnt = 0;
    for(int i = 0; i < d; i++){
        if(allfree[i]) cnt++;
        else{
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    ans = max(ans, cnt);
    cout << ans << endl;
    return 0;
}