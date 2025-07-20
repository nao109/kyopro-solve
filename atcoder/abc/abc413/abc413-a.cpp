#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, m;
    cin >> n >> m;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        sum += a;
    }
    if(sum <= m) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
