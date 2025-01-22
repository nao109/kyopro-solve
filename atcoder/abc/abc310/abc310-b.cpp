#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> p(n);
    vector f(n, vector<bool>(m));
    for(int i = 0; i < n; i++){
        int c;
        cin >> p[i] >> c;
        for(int j = 0; j < c; j++){
            int x;
            cin >> x;
            f[i][x - 1] = true;
        }
    }

    bool ans = false;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            bool flag1 = (p[i] >= p[j]);
            bool flag2 = true;
            bool flag3 = (p[i] > p[j]);

            for(int k = 0; k < m; k++){
                if(f[i][k] && !f[j][k]) flag2 = false;
                if(!f[i][k] && f[j][k]) flag3 = true;
            }

            if(flag1 && flag2 && flag3) ans = true;
        }
    }

    cout << (ans ? "Yes\n" : "No\n");
    return 0;
}