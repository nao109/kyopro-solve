#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int a, b, d;
    cin >> a >> b >> d;
    for(int i = a; i <= b; i += d) cout << i << " ";
    cout << "\n";
    return 0;
}