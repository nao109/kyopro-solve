#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n;
    vector<int> x(n);
    for(int i = 0; i < n; i++) cin >> x[i];
    cin >> m;
    vector<int> a(m);
    for(int i = 0; i < m; i++){
        cin >> a[i];
        a[i]--;
    }

    for(int i = 0; i < m; i++){
        if(x[a[i]] == 2019 || x[a[i]] == x[a[i] + 1] - 1) continue;
        else x[a[i]]++;
    }

    for(int i = 0; i < n; i++) cout << x[i] << endl;
    return 0;
}