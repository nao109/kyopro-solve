#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ok = max(a.back(), b.back()) + 1, ng = 0;
    while(abs(ok - ng) > 1){
        int mid = (ok + ng) / 2;

        int dist_a = distance(a.begin(), upper_bound(a.begin(), a.end(), mid));
        int dist_b = distance(lower_bound(b.begin(), b.end(), mid), b.end());

        if(dist_a >= dist_b) ok = mid;
        else ng = mid;
    }
    cout << ok << endl;
    return 0;
}