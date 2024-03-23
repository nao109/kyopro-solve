#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    map<int, int> pos;
    for(int i = 0; i < n; i++){
        int p;
        cin >> p;
        pos[p] = i;
    }

    int q;
    cin >> q;
    while(q--){
        int a, b;
        cin >> a >> b;
        cout << (pos[a] < pos[b] ? a : b) << "\n";
    }
    return 0;
}
