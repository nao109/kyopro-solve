#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];

    int max_h = h[0], max_id = 0;
    for(int i = 0; i < n; i++){
        if(h[0] < h[i]){
            cout << i + 1 << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
    return 0;
}
