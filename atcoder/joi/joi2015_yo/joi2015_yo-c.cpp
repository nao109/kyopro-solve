#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> c(h);
    for(int i = 0; i < h; i++) cin >> c[i];

    vector ans(h, vector<int>(w));
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(c[i][j] == 'c') ans[i][j] = 0;
            else if(j == 0) ans[i][j] = -1;
            else if(ans[i][j - 1] == -1) ans[i][j] = -1;
            else ans[i][j] = ans[i][j - 1] + 1;
        }
    }
    
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << ans[i][j] << " \n"[j == w - 1];
        }
    }
    return 0;
}
