#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    ll n;
    cin >> n;
    while(n % 2 == 0) n /= 2;
    while(n % 3 == 0) n /= 3;
    cout << (n == 1 ? "Yes\n" : "No\n");
    return 0;
}