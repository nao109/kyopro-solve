#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    long double ok = 0, ng = 100;
    while(abs(ok - ng) >= 0.001){
        long double mid = (ok + ng) / 2;
        if(mid * (mid * mid + 1) <= n) ok = mid;
        else ng = mid;
    }
    cout << fixed << setprecision(10) << ok << endl;
    return 0;
}