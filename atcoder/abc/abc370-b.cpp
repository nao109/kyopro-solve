#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n + 1);
    for(int i = 1; i <= n; i++){
        a[i].push_back(0);
        for(int j = 1; j <= i; j++){
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }

    int now = 1;
    for(int i = 1; i <= n; i++){
        if(now >= i) now = a[now][i];
        else now = a[i][now];
    }
    cout << now << "\n";
    return 0;
}
