#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int M, D, y, m, d;
    cin >> M >> D >> y >> m >> d;

    if(m == M){
        if(d == D) cout << y + 1 << " " << 1 << " " << 1 << endl;
        else cout << y << " " << m << " " << d + 1 << endl;
    }
    else{
        if(d == D) cout << y << " " << m + 1 << " " << 1 << endl;
        else cout << y << " " << m << " " << d + 1 << endl;
    }
    return 0;
}