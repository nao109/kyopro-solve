#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    if(n % 5 <= 2) cout << n / 5 * 5 << endl;
    else cout << (n + 4) / 5 * 5 << endl;
    return 0;
}