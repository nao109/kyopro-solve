#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, q;
    cin >> n >> q;
    vector<int> num(n, 0);
    for(int i = 0; i < q; ++i){
        int k, x;
        cin >> k >> x;
        if(k == 1) num[x - 1]++;
        if(k == 2) num[x - 1] += 2;
        if(k == 3) cout << (num[x - 1] > 2 ? "Yes\n" : "No\n");
    }
    return 0;
}