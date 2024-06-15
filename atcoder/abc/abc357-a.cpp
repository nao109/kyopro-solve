#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];
    for(int i = 0; i < n; i++){
        m -= h[i];
        if(m < 0){
            cout << i << "\n";
            return 0;
        }
        else if(m == 0){
            cout << i + 1 << "\n";
            return 0;
        }
    }
    cout << n << "\n";
    return 0;
}
