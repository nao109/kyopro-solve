#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const long double PI = acos(-1);
int main(){
    long double a, b, c;
    cin >> a >> b >> c;

    auto f = [a, b, c](long double t){return a * t + b * sin(c * PI * t);};

    long double t = 0;
    while(f(t) <= 100) t += 1;

    long double ng = t - 2;
    long double ok = t;
    while(f(ok) - 100 > 0.0000001){
        long double mid = (ng + ok) / 2;
        if(f(mid) < 100) ng = mid;
        else ok = mid;
    }
    cout << fixed << setprecision(10) << ok << endl;
    return 0;
}