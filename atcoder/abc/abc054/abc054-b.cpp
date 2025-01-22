#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<string> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    bool flag = false;
    for(int i = 0; i <= n - m; i++){
        for(int j = 0; j <= n - m; j++){
            bool check = true;

            for(int k = 0; k < m; k++){
                for(int l = 0; l < m; l++){
                    if(a[i + k][j + l] != b[k][l]) check = false;
                }
            }

            flag |= check;
        }
    }
    cout << (flag ? "Yes\n" : "No\n");
    return 0;
}