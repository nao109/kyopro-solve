#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    if(sum < 10) cout << "1\n";
    else if(sum < 100) cout << "2\n";
    else cout << "3\n";
    return 0;
}
