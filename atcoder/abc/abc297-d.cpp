#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    ll a, b;
    cin >> a >> b;
    ll ans = 0;
    while(a != b){
        if(a > b){
            cerr << a / b << endl;
            ans += a / b;
            a %= b;
        }
        else{
            cerr << b / a<< endl;
            ans += b / a;
            b %= a;
        }
        if(a == 0 || b == 0){
            ans--;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}