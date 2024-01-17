#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    int ans = 0;
    while(n % 2 == 0){
        ans++;
        n /= 2;
    }
    cout << ans << endl;
    return 0;
}