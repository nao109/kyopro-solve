#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string d = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    cin >> n;

    if(n == 0){
        cout << "0\n";
        return 0;
    }

    string ans = "";
    while(n > 0){
        ans.push_back(d[n % 36]);
        n /= 36;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}