#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int sum = 0;
    for(int i : a) sum += i;
    if(sum % n != 0){
        cout << "-1\n";
        return 0;
    }

    int ans = 0;
    int diff = 0;
    for(int i = 0; i < n; i++){
        a[i] -= diff;
        diff = 0;
        if(a[i] == sum / n) continue;
        ans++;
        diff = sum / n - a[i];
        a[i] = sum / n;
    }
    
    cout << ans << endl;
    return 0;
}