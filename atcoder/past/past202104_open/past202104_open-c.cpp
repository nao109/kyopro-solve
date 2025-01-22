#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n);
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }
    int p, q;
    cin >> p >> q;
    set<int> b;
    for(int i = 0; i < p; i++){
        int x;
        cin >> x;
        b.insert(x);
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        int hitcnt = 0;
        for(int j : a[i]){
            if(b.count(j)) hitcnt++;
        }
        if(hitcnt >= q) ans++;
    }
    cout << ans << endl;
    return 0;
}