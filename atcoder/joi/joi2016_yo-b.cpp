#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    
    for(int k = 1; k <= m; k++){
        for(int i = 0; i < n - 1; i++){
            if(a[i] % k > a[i + 1] % k) swap(a[i], a[i + 1]);
        }
    }

    for(int i = 0; i < n; i++) cout << a[i] << endl;
    return 0;
}