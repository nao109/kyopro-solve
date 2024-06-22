#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    
    int ok = -1, ng = n;
    while(abs(ok - ng) > 1){
        int mid = (ok + ng) / 2;
        if(a[mid] <= x) ok = mid;
        else ng = mid;
    }
    cout << ok + 1 << endl;
    return 0;
}