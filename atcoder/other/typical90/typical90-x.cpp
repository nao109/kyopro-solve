#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n), diff(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++) diff[i] = abs(a[i] - b[i]);
    
    int sum = accumulate(diff.begin(), diff.end(), 0);
    if(sum > k) cout << "No\n";
    else if(sum % 2 == k % 2) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}