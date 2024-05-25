#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, t;
    cin >> n >> t;
    vector<int> a(t);
    for(int i = 0; i < t; i++){
        cin >> a[i];
        a[i]--;
    }

    vector<int> r(n, 0), c(n, 0);
    int lr = 0, rl = 0;
    for(int i = 0; i < t; i++){
        int y = a[i] / n, x = a[i] % n;

        r[y]++, c[x]++;

        if(y == x) lr++;
        if(y == n - 1 - x) rl++;

        if(r[y] == n || c[x] == n || lr == n || rl == n){
            cout << i + 1 << "\n";
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}
