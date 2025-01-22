#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(k <= 0) break;
        ans++;
        k -= a[i];
    }
    cout << (k <= 0 ? ans : -1) << endl;
    return 0;
}