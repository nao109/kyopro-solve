#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int x;
    int y;
    cin >> x >> y;
    if(y == 0) cout << "ERROR\n";
    else{
        cout << fixed << setprecision(2) << (double)(x * 100 / y) / 100 << endl;
    }
    return 0;
}
