#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int a, b;
    cin >> a >> b;

    bool flag = false;
    if(a == 1 && b == 2) flag = true;
    if(a == 2 && b == 3) flag = true;
    if(a == 4 && b == 5) flag = true;
    if(a == 5 && b == 6) flag = true;
    if(a == 7 && b == 8) flag = true;
    if(a == 8 && b == 9) flag = true;

    cout << (flag ? "Yes\n" : "No\n");
    return 0;
}