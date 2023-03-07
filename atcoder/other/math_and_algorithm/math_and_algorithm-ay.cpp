#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    ll n;
    cin >> n;
    n %= 4;
    if(n == 0) cout << 6 << endl;
    else if(n == 1) cout << 2 << endl;
    else if(n == 2) cout << 4 << endl;
    else cout << 8 << endl;
    return 0;
}