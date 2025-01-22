#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

ll d(ll n){
    int res = 0, i = n;
    while(i > 0){
        i /= 10;
        res++;
    }
    return res;
}

int main(){
    ll a, b, x;
    cin >> a >> b >> x;

    ll ok = 0, ng = 1000000001;
    while(abs(ok - ng) > 1){
        int mid = (ok + ng) / 2;
        if(a * mid + b * d(mid) <= x) ok = mid;
        else ng = mid;
    }
    cout << ok << endl;
    return 0;
}