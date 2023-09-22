#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int a, b;
    cin >> a >> b;

    int a_b = 1, b_a = 1;
    for(int i = 0; i < b; i++) a_b *= a;
    for(int i = 0; i < a; i++) b_a *= b;

    cout << a_b + b_a << endl;
    return 0;
}