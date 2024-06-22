#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    vector<int> a(n * 2);
    for(int i = 0; i < n * 2; i++) cin >> a[i];

    int ans = 0;
    for(int i = 0; i < n * 2 - 2; i++){
        if(a[i] == a[i + 2]) ans++;
    }
    cout << ans << "\n";
    return 0;
}
