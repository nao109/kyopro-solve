#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector g(100, vector<bool>(100, false));
    for(int i = 0; i < n; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        for(int j = a; j < b; j++){
            for(int k = c; k < d; k++){
                g[j][k] = true;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(g[i][j]) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}