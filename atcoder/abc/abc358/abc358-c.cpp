#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

const int INF = 1e9;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    int ans = INF;
    for(int i = 1; i < (1 << n); i++){
        int count = 0;
        int eat = 0;
        for(int bit = 0; bit < n; bit++){
            if(i & (1 << bit)){
                count++;
                for(int j = 0; j < m; j++){
                    if(s[bit][j] == 'o') eat |= (1 << j);
                }
            }
        }
        if(eat == (1 << m) - 1){
            ans = min(ans, count);
        }
    }
    cout << ans << "\n";
    return 0;
}
