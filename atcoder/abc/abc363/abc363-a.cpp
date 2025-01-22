#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int r;
    cin >> r;
    if(r < 100) cout << 100 - r << "\n";
    else if(r < 200) cout << 200 - r << "\n";
    else if(r < 300) cout << 300 - r << "\n";
    return 0;
}
