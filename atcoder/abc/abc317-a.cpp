#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, h, x;
    cin >> n >> h >> x;
    vector<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];

    for(int i = 0; i < n; i++){
        if(x <= h + p[i]){
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}