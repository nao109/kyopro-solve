#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    string ans = "";
    if(n == 0){
        cout << 0 << endl;
        return 0;
    }
    while(n > 0){
        if(n % 36 >= 10) ans.push_back('A' + n % 36 - 10);
        else ans.push_back('0' + n % 36);
        n /= 36;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}