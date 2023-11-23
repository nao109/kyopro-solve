#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int ans = 0;
    for(int i = 0; i < 5; i++){
        int n;
        cin >> n;
        ans += max(n, 40);
    }
    cout << ans / 5 << endl;
    return 0;
}