#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

long double f(long double a, long double b, long double c, long double x){
    long double res = a * x * x * x * x * x + b * x + c;
    return res;
}

int main(){
    long double a, b, c;
    cin >> a >> b >> c;

    long double l = 1, r = 2;
    while(abs(r - l) >= 0.000000001){
        long double mid = (l + r) / 2;
        if(f(a, b, c, mid) <= 0) l = mid;
        else r = mid;
    }

    cout << fixed << setprecision(15) << l << endl;
    return 0;
}