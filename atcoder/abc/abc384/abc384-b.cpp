#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, r;
    cin >> n >> r;
    for(int i = 0; i < n; i++){
        int d, a;
        cin >> d >> a;
        if(d == 1 && 1600 <= r && r <= 2799) r += a;
        else if(d == 2 && 1200 <= r && r <= 2399) r += a;
    }
    cout << r << "\n";
    return 0;
}
