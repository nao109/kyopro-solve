#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, d;
    cin >> n >> d;
    vector<int> t(n);
    for(int i = 0; i < n; ++i) cin >> t[i];
    
    for(int i = 1; i < n; ++i){
        if(t[i] - t[i - 1] <= d){
            cout << t[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}