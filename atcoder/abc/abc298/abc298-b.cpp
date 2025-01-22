#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int a[4][110][100], b[110][110];
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cin >> a[0][i][j];
        }
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cin >> b[i][j];
        }
    }

    bool ans = true;
    for(int i = 0; i < 4; ++i){
        ans = true;
        for(int j = 1; j <= n; ++j){
            for(int k = 1; k <= n; ++k){
                if(a[i][j][k] == 1 && b[j][k] == 0) ans = false;
            }
        }

        if(ans) break;

        if(i == 3) break;
        for(int j = 0; j <= n; ++j){
            for(int k = 0; k <= n; ++k){
                a[i + 1][j][k] = a[i][n + 1 - k][j];
            }
        }
    }
    cout << (ans ? "Yes\n" : "No\n");
    return 0;
}