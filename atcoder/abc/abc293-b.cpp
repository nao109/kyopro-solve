#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<bool> call(n, false);
    for(int i = 0; i < n; ++i) cin >> a[i];
    int ans = 0;
    for(int i = 0; i < n; ++i){
        if(!call[i] && !call[a[i] - 1]){
            call[a[i] - 1] = true;
            ans++;
        }
    }

    cout << ans << endl;
    for(int i = 0; i < n; ++i){
        if(!call[i]) cout << i + 1 << " ";
    }
    cout << endl;
    return 0;
}